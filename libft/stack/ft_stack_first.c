/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:48:01 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:48:03 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_stack_first() funtion returns the first element of the list.
**
** @param	t_stack	*stack	- the beginning of the list.
**
** @return
** 		- the ft_stack_last() funtion returns the first element of the list.
*/
t_stack	*ft_stack_first(t_stack *stack)
{
	if (!stack)
		return (NULL);
	return (stack);
}
