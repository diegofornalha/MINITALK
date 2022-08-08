/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:55:42 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:55:43 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a decimal-digit character test.
** The isdigit() function tests for a decimal digit character. Regardless of
** locale, this includes the following characters only:
** ``0''         ``1''         ``2''         ``3''         ``4''
** ``5''         ``6''         ``7''         ``8''         ``9''
**
** @param	int	c	- the character to be tested.
**
** @return
** 		- The isalpha() function returns zero if the character tests false and
** 		returns non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
