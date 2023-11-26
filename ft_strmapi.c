/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:43:01 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:56:02 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	size_t	i;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (0);
	i = -1;
	while (s[++i])
		dest[i] = (*f)((unsigned int)i, s[i]);
	dest[i] = 0;
	return (dest);
}
