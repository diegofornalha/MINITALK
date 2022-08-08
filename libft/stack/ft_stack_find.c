/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:55 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:57 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function iterates 'stack' and returns the index of value in 'stack', if
** such value exists.
**
** @param	t_stack	*stack	- stack of integers to iterate.
**
** @param	int		value	- value top search in 'stack' and return position.
** 
** @return
** 		- the ft_stack_find() function returns the value's index in 'stack' from
** 		0 to ft_stack_size(stack) - 1; if there's no such 'value' in stack, then
** 		the function returns INT_MIN.
*/
int	ft_stack_find(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (value == stack->data)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-2147483648);
}
