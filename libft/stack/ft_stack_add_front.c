/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:34 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:36 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function adds an element to a stack. 
** The ft_stack_add_front() function adds the element 'new' at the beginning of
** the stack.
**
** @param	t_stack **stack	- address of a pointer to the first link of a
**							stack.
** @param	t_stack	*new	- address of a pointer to the element to be added
**							to the stack.
*/
void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	t_stack	*temporary;

	temporary = *stack;
	if (temporary)
	{
		new->next = temporary;
		temporary->previous = new;
	}
	*stack = new;
}
