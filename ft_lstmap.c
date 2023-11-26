/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:59:47 by mdiamant          #+#    #+#             */
/*   Updated: 2023/02/21 14:08:25 by mdiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	new = ft_lstnew ((*f)(lst->content));
	first = new;
	if (!lst || !new)
		return (0);
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew ((*f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&first, (*del));
			return (0);
		}
		lst = lst->next;
		new = new->next;
	}
	return (first);
}
