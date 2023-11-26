/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:38:24 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/22 18:49:49 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	int		len;

	len = ft_strlen(src);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (len >= 0)
	{
		p[len] = src[len];
		len--;
	}
	return (p);
}
