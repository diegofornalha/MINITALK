/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:56:14 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:56:15 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an integer to a numeric string.
** The ft_itoa() function allocates (with malloc()) and returns a string
** representing the integer received as an argument. Negative numbers must be
** handled.
**
** @param	int	n	- integer to convert.
**
** @return
** 		- The ft_itoa() function returns the string representing the integer, or
** 		null if the allocation fails.
*/
char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nbrlen(ft_abs(n), 10);
	if (n < 0)
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
