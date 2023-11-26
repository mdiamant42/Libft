/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:59:51 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:47 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*a;

	a = (unsigned char *)s;
	cnt = 0;
	while (cnt < n)
	{
		a[cnt] = c;
		cnt ++;
	}
	ft_memcpy(s, (const char *)a, n + 1);
	return (s);
}
