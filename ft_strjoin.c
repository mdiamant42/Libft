/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:19:03 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:58 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dest;
	size_t		destlen;

	if (!s1 || !s2)
		return (0);
	destlen = ft_strlen(s1) + ft_strlen(s2);
		dest = malloc(sizeof(char) * destlen + 1);
	if (dest == 0)
		return (0);
	if (ft_strlcpy(dest, s1, ft_strlen(s1) + 1) == ft_strlen(s1))
	{
		if (ft_strlcat(dest, s2, destlen + 1) == destlen)
			return (dest);
	}
	return (0);
}
