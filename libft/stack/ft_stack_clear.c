/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:41 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:42 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_stack_clear() function deletes and frees the given element and every
** successor of that element, using the function ’del’ and free(). Finally, the
** pointer to the list must be set to null.
**
** @param	t_stack	**stack		- address of a pointer to an element.
*/
void	ft_stack_clear(t_stack **stack)
{
	if (!stack)
		return ;
	while (*stack)
		ft_stack_remove(stack);
}
