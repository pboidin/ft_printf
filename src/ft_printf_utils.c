/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:18:37 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/11 00:42:14 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_str_printer(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putperc(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_nbr_printer(int n)
{
	int		size;
	char	*nbr;

	size = 0;
	nbr = ft_itoa(n);
	size = ft_str_printer(nbr);
	free(nbr);
	return (size);
}
