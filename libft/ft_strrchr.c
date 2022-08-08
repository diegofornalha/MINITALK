/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:59:21 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:59:22 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates a character in a string.
** The ft_strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
**
** @param	const void	*s		- string where character is searched.
** @param	int			c		- character that is to be searched.
**
** @return
** 		- The function strrchr() returns a pointer to the located character, or
** 		NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	if (!s[0])
		return (NULL);
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
