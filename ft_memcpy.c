/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:46:46 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:43 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			cnt;
	unsigned char	*a;
	unsigned char	*b;

	cnt = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (cnt < n)
	{
		a[cnt] = b[cnt];
		cnt ++;
	}
	return (a);
}
