/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:54:29 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:54:30 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** This function converts a ASCII string to an integer.
** The ft_atoi() function converts the initial portion of the string pointed to
** by str to int representation.
**
** @param	const char	*str	- string to be converted to int.
**
** @return
** 		- The ft_atoi() function returns the int representation of the string.
*/
long long	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	long long int	number;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	negative = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negative = -1;
	}
	number = 0;
	while (ft_isdigit(str[i]))
		number = (number * 10) + (negative * (str[i++] - '0'));
	return (number);
}
