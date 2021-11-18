/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:30:54 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:30:54 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** La fonction ft_strdup() renvoie un pointeur sur une 
** nouvelle chaine de caractere qui est dupliquee depuis s. 
** La memoire occupee par cette nouvelle chaine est obetnue 
** en appelant malloc, et peut donc etre liberee avec free. 
*/

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
