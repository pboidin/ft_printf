/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:31:04 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:31:04 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Applique la fonction f à chaque caractère de la 
** chaîne de caractères transmise comme argument, et en 
** passant son index comme premier argument. 
** Chaque caractère est transmis par adresse à f 
** pour être modifié si nécessaire. 
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[1])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
