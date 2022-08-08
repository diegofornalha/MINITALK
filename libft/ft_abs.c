/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:54:15 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:54:17 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_abs() function computes the absolute value of the integer argument j.
**
** @param	int	j	- integer to be computed.
**
** @return
** 		- The ft_abs() function returns the absolute value of the integer
** 		argument.
*/
int	ft_abs(int j)
{
	if (j < 0)
		return (-j);
	return (j);
}
