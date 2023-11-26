/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:54:15 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 08:55:31 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n);
static char	*ft_res(char *dest, int cnt, int n);

char	*ft_itoa(int n)
{
	char	*dest;
	int		cnt;

	cnt = ft_len(n);
	dest = malloc(sizeof(char) * (cnt + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_res(dest, cnt, n);
	return (dest);
}

static int	ft_len(int n)
{
	int	temp;
	int	cnt;

	temp = n;
	cnt = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		cnt ++;
	}
	if (n <= 0)
		cnt ++;
	return (cnt);
}

static char	*ft_res(char *dest, int cnt, int n)
{
	dest[cnt] = 0;
	if (n < 0)
	{
		dest [0] = '-';
		dest [cnt - 1] = n % 10 * -1 + '0';
		n = n / 10 * -1;
		cnt -= 1;
		while (cnt > 1)
		{
			dest[cnt - 1] = n % 10 + '0';
			n /= 10;
			cnt--;
		}
	}
	else
	{
		while (cnt > 0)
		{
			dest[cnt - 1] = n % 10 + '0';
			n /= 10;
			cnt--;
		}
	}
	return (dest);
}
