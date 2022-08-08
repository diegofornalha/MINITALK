/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:57:47 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:48 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if the string 'str' is a alphabetic string.
** The ft_str_isalpha() function iterates a string 'str' and checks if all the
** characters are alphabetic.
**
** @param	char	*str	- string to check if it contains only alphabetic.
**
** @return
** 		- The ft_str_isalpha() function returns 1, in case the string 'str' is
** 		a numeric string; or returns 0 in case it isn't.
*/
int	ft_str_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
