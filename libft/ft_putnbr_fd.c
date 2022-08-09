/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:57:14 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:18 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This funtion outputs an integer.
** The ft_putnbr_fd() function outputs the integer 'n' to the given file
** descriptor.
**
** @param	int		n	- The integer to output.
** @param	int		fd	- file descriptor on which to write.
*/
int	ft_putnbr_fd(int n, int fd)
{
  int len = 0;
	if (n == -2147483648)
	{
    len += write(fd, "-2147483648", 11);
		return(len);
	}
	if (n < 0)
	{
    len += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		len += ft_putchar_fd(n + '0', fd);
		return (len);
	}
	len += ft_putnbr_fd(n / 10, fd);
	len += ft_putnbr_fd(n % 10, fd);
  return (len);
}
