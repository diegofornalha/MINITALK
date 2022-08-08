/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:55:26 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:55:28 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a test for ASCII characters.
** The ft_isascii() function tests for an ASCII character, which is any character
** between 0 and octal 0177 inclusive.
**
** @param	int	c	- the character to be tested.
**
** @return
**		- The ft_isascii() function returns zero if the character tests false
**		and returns non-zero if the character tests true.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
