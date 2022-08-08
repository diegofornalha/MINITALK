/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:50:35 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:50:36 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a lower case to upper case letter convertion.
** The ft_toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char or
** the value of EOF.
**
** @param	int	c	- character to be 'upped'.
**
** @return
** 		- If the argument is a lower-case letter, the ft_toupper() function
** 		returns the corresponding upper-case letter if there is one; otherwise,
** 		the argument is returned unchanged.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
