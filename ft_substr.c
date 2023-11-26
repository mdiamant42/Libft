/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:33:52 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/22 17:59:24 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	cnt;
	char			*dest;
	size_t			len_s;

	len_s = ft_strlen((char *)s);
	cnt = 0;
	if (start > len_s)
	{
		dest = malloc (1);
		dest [0] = 0;
		return (dest);
	}
	while (s[cnt + start] && cnt < len)
		cnt ++;
	dest = malloc (sizeof(*s) * (cnt + 1));
	cnt = 0;
	if (!dest)
		return (NULL);
	while (s[cnt + start] && cnt < len)
	{
		dest[cnt] = s[cnt + start];
		cnt ++;
	}
	dest [cnt] = 0;
	return (dest);
}
