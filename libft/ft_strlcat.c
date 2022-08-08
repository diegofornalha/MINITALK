/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:38 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:39 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function does size-bounding string concatenation.
** The strlcat() function concatenates strings with the same input parameters
** It's designed to be safer, more consistent, and less error prone replacement
** for the easily misused function strncat().
** strlcat() takes the full size of the destination buffer and guarantee
** NULL-termination if there is room. Note that room for the NULL should be
** included in dstsize.
** strlcat() appends string src to the end of dst.  It will append at most
** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect or that
** dst is not a proper string)
** If the src and dst strings overlap, the behavior is undefined.
**
** @param	char		*dst	- dst is the string where dstsize bytes from src
** 								will be concatenated to.
** @param	const char	*src	- string to be concatenated with dst.
** @param	size_t		dstsize	- number of bytes for the dst to have at the
** 								end. 
**
** @return
** 		- the strlcat() function returns the total length of the string it has
** 		tried to create - that means the initial length of dst plus the length
** 		of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
