/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:30:00 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:30:01 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
		d[i++] = (unsigned char)c;
	s = (void *)d;
	return (s);
}
