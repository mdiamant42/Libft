/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:37:58 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:56:04 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cnt;
	char	*temp;

	temp = (char *)s;
	cnt = ft_strlen(s);
	while (cnt >= 0)
	{
		if (s[cnt] == (unsigned char)c)
			return (temp + cnt);
		cnt --;
	}
	return (0);
}
