/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:20:46 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:42 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*temp1;
	unsigned char	*temp2;

	cnt = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (cnt < n)
	{
		if (temp1[cnt] != temp2[cnt])
			return (temp1[cnt] - temp2[cnt]);
		cnt ++;
	}
	return (0);
}
