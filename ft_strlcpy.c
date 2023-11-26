/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:22:27 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:56:01 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	if (size == 0)
		return (ft_strlen(src));
	size --;
	if (ft_strlen(src) == 0)
	{
		dst[0] = 0;
		return (0);
	}
	srclen = ft_strlen(src);
	if (srclen > size)
		srclen = size;
	dst = ft_memcpy(dst, src, srclen);
		dst[srclen] = 0;
	return (ft_strlen(src));
}
