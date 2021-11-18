/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:31:17 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/07 11:31:18 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				src_len;
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (size && (--size - dest_len) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
