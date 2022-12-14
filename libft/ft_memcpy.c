/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:56:36 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:56:37 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies a memory area.
** The ft_memcpy() function copies n bytes from memory area src to memory area
** dst.  If dst and src overlap, behavior is undefined.  Applications in which
** dst and src might overlap should use memmove(3) instead.
**
** @param	void		*dst		- string from where n bytes of src will be
** 									copied to.
** @param	const void	*src		- string to be copied to dst.
** @param	size_t		n			- number of bytes to be copied from src to
** 									dst.
**
** @return
** 		- The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
