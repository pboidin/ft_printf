/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:50 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:29:52 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** La fonctione ft_memmove copie n octets depuis la zone 
** memoire src vers la zone memoire dest. Les deux zones 
** peuvent se chevaucher : la copie se passe comme si les 
** octets de src etaient d'abord copies dans une zone temporaire 
** qui ne chevauche ni src ni dest, et les octets sont ensuite 
** copies de la zone temporaire a la zone dest. 
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 2];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
