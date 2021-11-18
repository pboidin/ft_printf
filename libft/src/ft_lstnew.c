/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:22 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:29:24 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_el;

	new_el = malloc(sizeof(t_list));
	if (!new_el)
		return (NULL);
	new_el->content = content;
	new_el->next = NULL;
	return (new_el);
}

/*
** int	main(void)
** {
** 	char	str[] = "ALLEZ LE LOSC";
**	
**	t_list	*elem;
**	elem = ft_lstnew((void *)str);
**	printf("\n%s\n", elem->content);
** }
*/
