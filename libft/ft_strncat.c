/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:59:00 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:59:07 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function concatenates two string.
** The ft_strncat() function appends the src string to the dst string,
** overwriting the terminating null byte ('\0') at the end of dst n times, and
** then adds a terminating null byte.  The strings may not overlap, and the dst
** string must have enough space for the result. If dst is not large enough,
** program behavior is  unpre‐dictable;
**
** @param	char			*dst	- string to append src.
** @param	const char		*src	- string to concatenate dst.
** @param	unsigned int	*n		- number of character to concatenate from
**									src to dst.
**
** @return
** 		- The ft_strncat() function returns a pointer to the resulting string
** 		dst.
*/
char	*ft_strncat(char *dst, char *src, unsigned int n)
{
	char			*r;
	unsigned int	i;

	r = dst;
	while (*dst != '\0')
	{
		dst++;
	}
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = '\0';
	return (r);
}
