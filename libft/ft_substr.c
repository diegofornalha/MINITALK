/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:59:33 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:59:34 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function
** The ft_substr() function allocates (with malloc()) and returns a substring
** from the string ’s’. The substring begins at index ’start’ and is of maximum
** size ’len’.
**
** @param	const char		*s		- string from which to create the substring.
** @param	unsigned int	start	- start index of the substring in the string
** 									’s’.
** @param	size_t			len		- maximum length of the substring.
**
** @return
** 		- The ft_substr() returns the the generated substring, or null if the
** 		allocation fails.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
