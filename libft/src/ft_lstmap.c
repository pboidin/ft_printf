/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:15 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:29:16 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;

	new_el = NULL;
	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (!(new_el == ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_el);
		lst = lst->next;
	}
	return (new_lst);
}
