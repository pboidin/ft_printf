/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_nbr_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:17:30 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/11 10:34:12 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_len(unsigned	int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_uns_itoa(unsigned int n)
{
	int		i;
	char	*str;

	i = ft_int_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (n != 0)
	{
		str[i - 1] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}

int	ft_uns_nbr_printer(unsigned int n)
{
	int		print_size;
	char	*nbr;

	print_size = 0;
	if (n == 0)
		print_size += write(1, "0", 1);
	else
	{
		nbr = ft_uns_itoa(n);
		print_size += ft_str_printer(nbr);
		free (nbr);
	}
	return (print_size);
}
