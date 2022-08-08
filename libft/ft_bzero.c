/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:54:43 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:54:44 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function writes zeroes to a byte string.
** The ft_bzero() function writes n zeroed ('\0') bytes to the string s. If n
** is zero, ft_bzero() does nothing.
**
** @param	void*	s		- string to be overwritten.
** @param	size_t	n		- number of bytes to be 'zeroed' in s.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = '\0';
	}
}
