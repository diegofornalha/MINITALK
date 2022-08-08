/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isnumeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:00:26 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 14:00:27 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if the string 'str' is a numeric string.
** The ft_str_isnumeric() function iterates a string and checks if all the
** characters are digits.
**
** @param	char	*str	- string to check if it contains only digits.
**
** @return
** 		- The ft_str_isnumeric() function returns 1, in case the string 'str' is
** 		a numeric string; or returns 0 in case it isn't.
*/
int	ft_str_isnumeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
