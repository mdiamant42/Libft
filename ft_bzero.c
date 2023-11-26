/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:42:27 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:54:44 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			cnt;
	unsigned char	*a;

	a = (unsigned char *)s;
	cnt = 0;
	while (cnt < n)
	{
		a[cnt] = 0;
		cnt ++;
	}
	if (n != 0)
		a[cnt - 1] = 0;
}
