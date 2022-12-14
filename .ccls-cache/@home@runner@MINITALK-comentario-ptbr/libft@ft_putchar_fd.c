/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:57:05 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:05 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This funtion outputs a character.
** The ft_putchar_fd() function outputs the character ācā to the given file
** descriptor.
**
** @param	char	c	- The character to output.
** @param	int		fd	- the file descriptor on which to write.
*/

int	ft_putchar_fd(char c, int fd)
{
  int len = write(fd, &c, 1);
  return (len);
}
