/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:08 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:46:09 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr <= 9)
	{
		ft_putchar_fd(48 + nbr, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putnbr_fd(nbr % 10, fd);
}
