/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:56:59 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:00 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_power() function returns the value of 'n' to the power of 'times'
**
** @param	long long n		- number to multiply 'times' times with itself.
** @param	long long times	- number of times 'n' multiplies itself.
**
** @return
** 		- The ft_power() function returns the number 'n' powered 'times' times.
*/
long long int	ft_power(long long n, long long times)
{
	long long	p;

	if (times < 0)
		return (0);
	p = 1;
	while (times)
		ft_power(p *= n, --times);
	return (p);
}
