/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:25 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:26 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function saves a copy of a string.
** The ft_strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it. The pointer may subsequently
** be used as an argument to the function free().
**
** @param	const char	*s1		- string to copy to s1.
**
** @return
** 		- The ft_strdup() function, returns null if an error was encountered,
** 		and returns the string that was copied.
*/
char	*ft_strdup(const char *s)
{
	int		i;
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
