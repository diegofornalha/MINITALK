/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:00 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:01 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a lower case string 'str' to upper case convertion.
** The ft_str_toupper() function iterates a string 'str' and converts the
** lower-case characters of the string to upper-case.
**
** @param	char	*str	- string to iterate and convert.
*/
void	ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
