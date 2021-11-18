/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:35 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:29:36 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** La fonction ft_memchr() examine les n premiers octets 
** de la zone memoire ponitee par s a la recherche du 
** caractere c. Le premier octet correspond a 
** c(interprete comme un unsigned char) arrete l'operation. 
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
