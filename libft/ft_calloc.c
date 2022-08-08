/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:54:50 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:54:51 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates memory.
** The ft_calloc() function allocates memory.The allocated memory is aligned
** such that it can be used for any data type.
** The calloc() function contiguously allocates enough space for count objects
** that are size bytes of memory each and returns a pointer to the allocated
** memory. The allocated memory is filled with bytes of value zero.
**
** @param		size_t	count 	- the number of objects to allocate.
** @param		size_t	size	- the size of the objects top be allocated.
**
** @return
** 		- If successful, calloc(), function returns a pointer to allocated
** 		memory.  If there is an error, then it returns a NULL pointer.
*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;

	tab = (char *)malloc(size * count);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, size * count);
	return (tab);
}
