/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:46:36 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:46:38 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdelone() function takes as a parameter an element and frees the
** memory of the element’s content using the function ’del’ given as a parameter
** and free the element. The memory of ’next’ must not be freed.
**
** @param	t_list	*lst		- the element to free.
** @param	void (*del)(void *)	- the address of the function used to delete the
** 								content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
