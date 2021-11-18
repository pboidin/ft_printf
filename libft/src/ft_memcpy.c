/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:46 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:29:47 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** La focntion ft_memcpy() copie n octets depuis 
** la zone memoire src vers la zone memore dest. 
** Les deux zones ne doivent pas se chevaucher. 
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;
	}
	return (dest);
}
