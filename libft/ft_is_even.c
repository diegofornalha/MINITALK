/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:54:57 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:54:58 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_is_even() function checks if a given int 'j' is even.
**
** @param	int	j	- given number.
**
** @return
** 		- The ft_is_even() function returns 1 if the given int 'j' is an even
** 		number, or 0 if 'j' is odd.
*/
int	ft_is_even(int j)
{
	if (j % 2 == 0)
		return (1);
	return (0);
}
