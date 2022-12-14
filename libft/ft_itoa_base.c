/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:56:07 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:56:08 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function take a integer and converts it to a base 'base' and into a char
** pointer.
**
** @param	unsigned long long int	n		- number to be converted to char *.
** @param	char					*base	- base to convert 'n' in.
**
** @return
** 		- The ft_itoa_base() function, in case of error, returns NULL; otherwise
** 		it returns the 'n' converted to the 'base' in the form of a char pointer
** 		'nbr'.
*/
char	*ft_itoa_base(unsigned long long int n, char *base)
{
	int		b;
	int		length;
	char	*nbr;

	b = ft_base_check(base);
	if (!b)
		return (NULL);
	length = ft_nbrlen(n, b);
	nbr = (char *)malloc(sizeof(char) * (length + 1));
	if (!nbr)
		return (NULL);
	nbr[length] = '\0';
	if (n == 0)
		nbr[0] = base[0];
	while (length > 0)
	{
		nbr[--length] = base[n % b];
		n /= b;
	}
	return (nbr);
}
