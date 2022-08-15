/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:00:19 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 14:00:19 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*
** Esta função é chamada caso ocorra um erro em uma chamada de sistema kill() em
** servidor. Ele libera 'str' se não for nulo e antes de sair do programa com
** EXIT_FAILURE emite uma mensagem de erro e tenta enviar SIGUSR2 ao cliente
** sinalizando um erro.
*/
void	error(int pid, char *str)
{
	if (str)
		free(str);
	ft_putstr_color_fd(ANSI_COLOR_RED,
		"server: unexpected error.\n", 2);
	kill(pid, SIGUSR2);
	exit(EXIT_FAILURE);
}

/*
** Esta função é chamada quando o servidor recebe a string completa - 'mensagem' de
** cliente. A função print_string() gera 'mensagem' e depois a libera
** retornando zero.
*/
char	*print_string(char *message)
{
	ft_putstr_fd(message, 1);
	free(message);
	return (0);
}

/*
** Esta função é chamada toda vez que o servidor recebe um sinal - SIGUSR1 ou
** SIGUSR2 do cliente.
** SIGUSR1 representa um 0; SIGUSR2 representa 1. Ao obter esses sinais de
** cliente servidor é capaz de recriar a string - recebendo-a bit a bit -
** usando operações bit a bit.
**
** @line - A função começa adicionando o bit - 0 ou 1 dependendo
** o sinal recebido do cliente - em um tipo de variável estática
** caractere 'c'.
**
** @line - Uma vez que 8 sinais são recebidos - handler_sigusr() é
** chamado 8 vezes ou bits == 8 - então o caractere está completo e
** é então adicionado a outro tipo de variável estática char * - 'message'
**
** @line - se o caractere recebido representa o caractere nulo, então
** nada mais é adicionado a 'mensagem' e a função
** print_string() é chamado para imprimir a mensagem, que é então definida
** volta para nulo.
**
** @line - Após receber o sinal e armazenar com sucesso o bit
** na string, o servidor envia um sinal SIGUSR1 ao cliente como
** confirmação de que recebeu o bit que enviou e que está pronto para
** outro.
*/
void	handler_sigusr(int signum, siginfo_t *info, void *context)
{
	static char	c = 0xFF;
	static int	bits = 0;
	static int	pid = 0;
	static char	*message = 0;

	(void)context;
	if (info->si_pid)
		pid = info->si_pid;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	if (++bits == 8)
	{
		if (c)
			message = ft_straddc(message, c);
		else
			message = print_string(message);
		bits = 0;
		c = 0xFF;
	}
	if (kill(pid, SIGUSR1) == -1)
		error(pid, message);
}

/*
** Esta é a principal função do servidor.
**
** @linha 115-123 - Inicia configurando a função que receberá o
** sinais de um cliente - sigaction() usado em vez de signal()
** para obter o parâmetro 'info->si_pid' o pid do
** remetente - cliente.
**
** @line 124-127 - Após a configuração, o servidor usa a função
** getpid() para enviar ao usuário seu PID. Isso será mais tarde
** usado para compilar o cliente.
**
** @linha 128-129 - A função então entra em um loop infinito de pausa() esperando
** para sinais do cliente.
*/
int	main(void)
{
	struct sigaction	sa_signal;
	sigset_t			block_mask;

	sigemptyset(&block_mask);
	sigaddset(&block_mask, SIGINT);
	sigaddset(&block_mask, SIGQUIT);
	sa_signal.sa_handler = 0;
	sa_signal.sa_flags = SA_SIGINFO;
	sa_signal.sa_mask = block_mask;
	sa_signal.sa_sigaction = handler_sigusr;
	sigaction(SIGUSR1, &sa_signal, 0);
	sigaction(SIGUSR2, &sa_signal, 0);
	ft_putstr_color_fd(ANSI_COLOR_GREEN,
		"PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
}
