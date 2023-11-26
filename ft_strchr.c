/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:34:41 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:56 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cnt;
	char	*temp;

	cnt = 0;
	temp = (char *)s;
	while (s[cnt])
	{
		if (s[cnt] == (unsigned char)c)
			return (temp + cnt);
		cnt ++;
	}
	if (c == 0)
		return (temp + cnt);
	return (0);
}
