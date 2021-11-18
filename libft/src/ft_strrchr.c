/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:32:00 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:32:00 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction ft_strrchr() renvoie un pointeur sur 
** la derniere occurence du caractere c dans la chaine s. 
*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last_occ;

	last_occ = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occ = (char *)&s[i];
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (last_occ);
}
