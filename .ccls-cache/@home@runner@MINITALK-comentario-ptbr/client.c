/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:36:43 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 14:22:03 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*
** Esta função é chamada caso ocorra um erro em uma chamada de sistema kill() em
** cliente. Ele libera 'str' se não for nulo e antes de sair do programa com
** EXIT_FAILURE gera uma mensagem de erro.
*/
void	error(char *str)
{
	if (str)
		free(str);
	ft_putstr_color_fd(ANSI_COLOR_RED,
		"client: unexpected error.\n", 2);
	exit(EXIT_FAILURE);
}

/*
** Esta função é chamada por send_bit() quando todos os bits da mensagem foram
** recebido pelo servidor. A função send_null() envia 8 sinais SIGUSR1
** representando o caractere nulo em binário - 00000000. Uma vez que i é igual a 8 - uma vez
** todos os zeros (SIGUSR1) foram enviados - a função retorna 1.
*/
int	send_null(int pid, char *str)
{
	static int	i = 0;

	if (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str);
		return (0);
	}
	return (1);
}

/*** Esta função envia um bit da string 'message' toda vez que ots é chamado.
** Possui três variáveis estáticas:
**
** char *message - É uma string duplicada da mensagem fornecida no
** função main() do cliente para enviar ao servidor. Em caso
** função send_bit() foi chamada com 'str' não sendo um
** null - isso só acontece em main() - s_pid será dado
** o valor dado no parâmetro 'pid'. Esta variável tem que
** seja constante para que o cliente não precise de um global
** variável.
** int s_pid - É o PID fornecido na função main() do cliente. Isso é
** o ID do processo do servidor. No caso da função send_bit()
** foi chamado com 'str' não sendo nulo - apenas isso
** acontece em main() - a mensagem receberá o valor de
** ft_strdup(str). Esta variável deve ser constante em
** ordem para que o cliente possa enviar um bit para o servidor
** toda vez que send_bit() é chamado.
** int bits - É o número do bit da mensagem que você deseja que o cliente envie
** servidor. Este valor é incrementado cada vez que send_bit()
** função é chamada.
*
** Caso todos os bits da 'mensagem' já tenham sido enviados ao servidor. send_bit()
** chama a função send_null(). Esta função envia 8 SIGUSR1 representando
** o caractere nulo \0 e sinalizando o final da string. Uma vez que todos os 8 bits
** foram enviados para o servidor 'mensagem' é liberada e a função retorna 1 informando
** handler_sigusr() que terminou de enviar a string.
*/
int	send_bit(int pid, char *str)
{
	static char	*message = 0;
	static int	s_pid = 0;
	static int	bits = -1;

	if (str)
		message = ft_strdup(str);
	if (!message)
		error(0);
	if (pid)
		s_pid = pid;
	if (message[++bits / 8])
	{
		if (message[bits / 8] & (0x80 >> (bits % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				error(message);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			error(message);
		return (0);
	}
	if (!send_null(s_pid, message))
		return (0);
	free(message);
	return (1);
}

/*
** Esta função é chamada toda vez que o cliente recebe um sinal - SIGUSR1 ou
** SIGUSR2 do servidor.
** Se o sinal recebido for SIGUSR1 isso significa que o servidor confirma o recebimento
** um pouco do cliente e está pronto para receber outro.
** Se o sinal recebido for SIGUSR2 significa que ocorreu um erro no
** servidor fazendo com que ele seja encerrado inesperadamente, então o cliente emite uma mensagem de erro
** e sai com EXIT_FAILURE.
*/
void	handler_sigusr(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR1)
		end = send_bit(0, 0);
	else if (signum == SIGUSR2)
	{
		ft_putstr_color_fd(ANSI_COLOR_RED,
			"client: server ended unexpectdly.\n", 2);
		exit(EXIT_FAILURE);
	}
	if (end)
	{
		ft_putstr_color_fd(ANSI_COLOR_GREEN,
			"client: operation successful.\n", 1);
		exit(EXIT_SUCCESS);
	}
}

/*
** Esta é a principal função do cliente.
** @param int argc - contador de argumentos.
** @param char **argv - parâmetros de linha de comando fornecidos ao cliente pelo usuário.
** formato correto: [./client <PID> <MESSAGE>]
**
** @line 2-9 Primeiro verifica se os parâmetros da linha de comando fornecidos pelo
** usuário estão corretos:
** [./cliente <PID_SERVER> <STR_TO_SEND_TO_SERVER>]. Em caso
** esses parâmetros não são o que o cliente precisa corretamente
** função, uma mensagem de erro é exibida e o programa
** sai com EXIT_FAILURE.
**
** @linha 10-11 se os parâmetros fornecidos pelo usuário estiverem corretos, o programa
** continua rodando e se prepara para receber
** SIGUSR1 - caso tudo esteja funcionando adequadamente no servidor
** ou SIGUSR2 - em caso de erros do servidor. O sinal()
** função é usada aqui com a função handler_sigusr()
** sendo chamado assim que esses sinais forem recebidos.
**
** @linha 12 depois que as funções signal() estiverem definidas, o programa envia
** o primeiro bit de 'STR_TO_SEND_TO_SERVER' para o servidor usando o
** função send_bit() com os parâmetros argv[1] - PID, e
** argv[2] - mensagem. Esta é a única vez no programa
** onde send_bit() é chamado com parâmetros não nulos. este
** só acontece por causa de suas variáveis estáticas.
** **ver comentários na linha 52-65**
**
** @linha 13-14 após enviar o primeiro bit da mensagem e, portanto,
** fazendo o primeiro contato com o servidor, o cliente entra em um
** loop infinito de funções pause() esperando por
** SIGUSR1 ou SIGUSR2. Se tudo correr bem e a mensagem for
** entregue com sucesso, cliente receberá apenas SIGUSR1
** sinais do servidor. Esses sinais são o reconhecimento
** do servidor que recebeu um pouco do cliente. Eu escolho isso
** abordagem em vez de usar as funções sleep() ou usleep().
*/
int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_str_isnumeric(argv[1]))
	{
		ft_putstr_color_fd(ANSI_COLOR_RED,
			"client: invalid arguments.\n", 2);
		ft_putstr_color_fd(ANSI_COLOR_YELLOW,
			"correct format: [./client <PID> <STR>].\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, handler_sigusr);
	signal(SIGUSR2, handler_sigusr);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
