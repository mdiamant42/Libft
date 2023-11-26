/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:32:53 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:51 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int				res;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (fd, "-", 1);
	}
	if (nb > 9)
	{
		res = nb % 10 + '0';
		nb = nb / 10;
		ft_putnbr_fd(nb, fd);
		write (fd, &res, 1);
	}
	else
	{
		nb += '0';
		write (fd, &nb, 1);
	}
}
