/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:46:44 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:46:45 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
** The ft_lstiter() function iterates the list 'lst' and applies the function
** 'f' to the content of each element.
**
** @param	t_list	*lst		- address of a pointer to an element.
** @param	void (*f)(void *)	- address of the function used to iterate on the
** 								list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
