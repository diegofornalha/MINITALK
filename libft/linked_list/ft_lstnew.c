/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:01 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:47:03 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function creates a new element of a list.
** The ft_lstnew() function allocates (with malloc()) and returns a new element.
** The variable 'content' is initialized with the value of the parameter
** 'content'. The variable 'next' is initialized to null.
**
** @param	void	*content	- content to create the new element with.
**
** @return
** 		- The ft_lstnew() function returns the new element of the list.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list) * 1);
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
