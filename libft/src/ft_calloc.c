/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:26:36 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:26:40 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** La fonction ft_calloc() alloue la memoire necessaire 
** pour un tableau de nmemb elements de size octets, 
** et renvoie un pointeur vers la memoire allouee. 
** Cette zone est remplie par des zeros. Si nmemb ou 
** si size est nulle, calloc renvoie soit un NULL ou 
** un unique pointeur qui pourra etre passe ulterieurement 
** a free() avec succes. 
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, nmemb);
	return (pt);
}
