/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:50:03 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:56:03 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	if (n > 0)
	{
		cpt = 0;
		while (s1[cpt] && s2[cpt] && cpt < n)
		{
			if (s1[cpt] != s2[cpt])
				return ((unsigned char) s1[cpt] - (unsigned char) s2[cpt]);
			cpt++;
		}
	}
	if (cpt >= n)
		return (0);
	return ((unsigned char) s1[cpt] - (unsigned char) s2[cpt]);
}
