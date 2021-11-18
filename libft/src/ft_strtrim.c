/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:32:05 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:32:06 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Alloue (avec malloc(3)) et retourne une copie de la chaine ’s1’, 
**sans les caractères spécifiés dans ’set’ au début et à la fin de 
**la chaine de caractères. 
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s;
	char	*string;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	string = ft_substr((char *)s1, 0, size_s + 1);
	return (string);
}
