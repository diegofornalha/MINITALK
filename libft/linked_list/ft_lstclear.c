/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:46:31 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:46:32 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
** The ft_lstclear() function deletes and frees the given element and every
** successor of that element, using the function ’del’ and free(3). Finally, the
** pointer to the list must be set to null.
**
** @param	t_list	**lst		- address of a pointer to an element.
** @param	void (*del)(void*)	- address of the function used to delete the
** 								content of the content.
*/
void	ft_lstclear(t_list **lst)
{
	if (!lst)
		return ;
	while (*lst)
		ft_lstremove(lst);
}
