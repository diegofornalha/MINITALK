/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:49:15 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:49:17 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_stack_remove() function takes as a parameter an element and frees the
** memory of the element’s content making its previous element point to it's
** next and its next point to its previous; it also frees the element.
**
** @param	t_stack	*stack		- the element to remove.
*/
void	ft_stack_remove(t_stack **stack)
{
	t_stack	*temporary;

	if (!stack)
		return ;
	temporary = *stack;
	if (temporary->next)
		temporary->next->previous = temporary->previous;
	if (temporary->previous)
		temporary->previous->next = temporary->next;
	if (temporary->previous)
		*stack = temporary->previous;
	else
		*stack = temporary->next;
	temporary->previous = NULL;
	temporary->next = NULL;
	temporary = NULL;
	free(temporary);
}
