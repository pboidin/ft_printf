/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:31:55 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:31:55 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction strnstr() localise la première occurrence 
** du terme null-termi-chaîne née petite dans la chaîne grande, 
** où pas plus de len caractères sont recherchés. Les caractères 
** qui apparaissent après un caractère "\0" ne sont pas cherché. 
** Puisque la fonction strnstr() est une API spécifique à FreeBSD, 
** elle ne doit être utilisé que lorsque la portabilité n'est pas un problème. 
*/

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	int		j;
	char	*pt;

	i = 0;
	pt = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[0])
		{
			pt = (char *)big + i;
			j = 0;
			while (big[i + j] == little[j] && i + j < n)
			{
				if (little[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (NULL);
}
