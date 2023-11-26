/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:41:27 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:56:03 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long int		cnt;
	char					*bigt;
	int						cpt2;

	bigt = (char *)big;
	cnt = 0;
	if (little[cnt] == 0)
		return (bigt);
	while (bigt[cnt] && cnt < len)
	{
		if (bigt[cnt] == little[0])
		{
			cpt2 = 0;
			while ((little[cpt2] == bigt[cnt + cpt2]) || little[cpt2] == '\0')
			{
				if ((cnt + cpt2) > len)
					return (0);
				if (little[cpt2] == '\0')
					return (bigt + cnt);
				cpt2++;
			}
		}
		cnt++;
	}
	return (0);
}
