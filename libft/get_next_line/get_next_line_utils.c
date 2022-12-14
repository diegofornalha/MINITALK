/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:45:46 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:45:49 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

/*
** This function creates a char * called tab, that allocates the necessary
** amount of memory to be able to contain s1 and s2 together.
**
** @param	char *s1	first string of characters being copied to tab.
** @param	char *s2	second string of characters being copied to tab.
**
** @returns		both strings joined in one string - tab.
*/
char	*ft_strjoin_helper(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = (char *)malloc(i * sizeof(char));
	if (!tab)
		return (NULL);
	i = -1;
	while (s1[++i])
		tab[i] = s1[i];
	j = -1;
	while (s2[++j])
		tab[i + j] = s2[j];
	tab[i + j] = '\0';
	free(s1);
	return (tab);
}
