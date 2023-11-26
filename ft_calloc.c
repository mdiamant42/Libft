/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:01:26 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/22 16:11:20 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;

	if (!n || !size)
		return (malloc(0));
	if (n * size / n != size)
		return (0);
	array = malloc (n * size);
	if (array)
		ft_bzero(array, n * size);
	return (array);
}
