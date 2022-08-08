/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:45:23 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:45:27 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function fills a byte string with a byte value.
** The ft_memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b.
**
** @param	void 	*b		- string that is going to be overwritten.
** @param	int 	c		- value (character) that is going to be written in b.
** @param	size_t 	len		- number of bytes that c is going to be written in b.
**
** @return
** 		- the ft_memset function returns its first argument.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i++] = (unsigned char)c;
	}
	return (b);
}
