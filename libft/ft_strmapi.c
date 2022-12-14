/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:55 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:56 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function applies a function 'f' to a string.
** The ft_strmapi() function applies the function ’f’ to each character of the
** string ’s’ to create a new string (with malloc()) resulting from successive
** applications of ’f’.
**
** @param	const char	*s							- string on which to
** 													iterate.
** @param	char		(*f)(unsigned int, char)	- function to apply to each
** 													character.
**
** @return
** 		- The ft_strmapi() function returns a string created from the successive
** 		applications of ’f’, or returns null if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
