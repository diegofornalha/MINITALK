/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:07 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:09 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function prints all data from a list.
** The ft_lstprint() function iterates the list, and prints with ft_putstr_fd()
** all the integers followed by a breakline.
**
** @param	t_stack	*stack	- stack to iterate from.
*/
void	ft_lstprint(t_list *lst)
{
	t_list	*temporary;

	if (!lst)
		return ;
	temporary = lst;
	while (temporary)
	{
		ft_putstr_fd(temporary->content, 1);
		if (temporary->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putstr_fd("\n", 1);
		temporary = temporary->next;
	}
}
