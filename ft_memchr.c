/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:35:24 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:40 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*temp;

	cnt = 0;
	temp = (unsigned char *)s;
	while (cnt < n)
	{
		if (temp[cnt] == (unsigned char)c)
			return ((void *)(temp + cnt));
		cnt ++;
	}
	return (0);
}
