/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:46:56 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:46:58 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstmap() function iterates the list ’lst’ and applies the function ’f’
** to the content of each element. Creates a new list resulting of the
** successive applications of the function ’f’. The ’del’ function is used to
** delete the content of an element if needed.
**
** @param	t_list *lst			- adress of a pointer to an element.
** @param	void *(*f)(void *)	- adress of the function used to iterate on the
** 								list.
** @param	void (*del)(void *)	- adress of the function used to delete the
** 								content of an element instead.
**
** @return
** 		- The ft_lstmap() function returns the new list, or null if the
** 		allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = ft_lstnew((*f)(lst->content));
	new = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew((*f)(lst->content));
		if (!temp->next)
		{
			ft_lstdelone(temp->next, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
