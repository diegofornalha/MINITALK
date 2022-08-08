/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:56:51 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:56:52 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function gets the number of digits of an integer.
** The ft_nbrlen() function returns the number of digits of an integer - the
** length that the string - that represents the integer - will need to have.
**
** @param	int	n		- number to get length from.
** @param	int	base	- base of the number we want to get the length from.
**
** @return
** 		- The number of digits of 'n'.
*/
int	ft_nbrlen(unsigned long long int number, int base)
{
	int	length;

	if (number == 0)
		return (1);
	length = 0;
	while (number > 0)
	{
		number /= base;
		length++;
	}
	return (length);
}
