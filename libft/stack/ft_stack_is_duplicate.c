/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:49:59 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:50:00 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if 'stack' has any duplicated integers
** The ft_stack_is_duplicate() function iterates the stack and checks if any
** integer is duplicated.
**
** @param	t_stack	*stack	- stack to iterate from.
**
** @return
** 		- The ft_stack_is_duplicate() function returns 1 if it contains
**		duplicate integers; or it returns 0 if it doesn't.
*/
int	ft_stack_is_duplicate(t_stack *stack)
{
	t_stack	*sorted;

	sorted = ft_stack_duplicate(stack);
	ft_stack_sort(&sorted);
	while (sorted->next)
	{
		if (sorted->data == sorted->next->data)
			return (1);
		sorted = sorted->next;
	}
	free(sorted);
	return (0);
}
