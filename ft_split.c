/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:16:04 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/24 11:59:58 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenmall(const char *src, char c);

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	dest = (char **)malloc (sizeof(char *) * (ft_lenmall(s, c) + 1));
	if (!dest || !s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			dest[j++] = ft_substr(s, start, i - start);
	}
	dest[j] = 0;
	return (dest);
}

static int	ft_lenmall(const char *src, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] != c && (i == 0 || src[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}
