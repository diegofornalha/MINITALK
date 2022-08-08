/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:55:03 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:55:04 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_is_negative() function checks if a integer 'n' is negative.
**
** @param	int	n	- number to check if it's negative.
**
** @return
** 		- The ft_is_negative() function returns 1, if the number 'n' is
** 		negative, or 0 if it's positive.
*/
int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}
