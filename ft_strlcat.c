/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:51:17 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:59 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen + srclen)
	{
		if ((srclen + size) > (srclen + dstlen))
		{
			if (size <= dstlen)
				return (dstlen);
			if (size <= srclen + dstlen)
				ft_strlcpy(dst + dstlen, src, size - dstlen);
			return (srclen + dstlen);
		}
		return (srclen + size);
	}
	size -= dstlen + 1;
	if (srclen > size)
		srclen = size;
	ft_strlcpy(dst + dstlen, src, srclen + 1);
	return (dstlen + srclen);
}
