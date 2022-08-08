/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:48 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:50 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function duplicates a stack.
** The ft_stack_duplicate() function copies a stack 'stack' and creates a
** duplicate of that stack 'duplicate'.
*/
t_stack	*ft_stack_duplicate(t_stack *stack)
{
	t_stack	*duplicate;
	t_stack	*new_node;

	duplicate = 0;
	while (stack)
	{
		new_node = ft_stack_new(stack->data);
		if (!new_node)
		{
			ft_stack_clear(&duplicate);
			return (0);
		}
		ft_stack_add_back(&duplicate, new_node);
		stack = stack->next;
	}
	return (duplicate);
}
