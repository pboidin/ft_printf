/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:28:44 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:28:46 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*old_el;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		old_el = *lst;
		*lst = old_el->next;
		free(old_el);
	}
	*lst = NULL;
}
