/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:37:53 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/10 13:04:06 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex_size(unsigned int nbr)
{
	int	n;

	n = 0;
	while (nbr != 0)
	{
		n++;
		nbr /= 16;
	}
	return (n);
}

void	ft_puthex(unsigned int nbr, const char n)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, n);
		ft_puthex(nbr % 16, n);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (n == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			if (n == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
}

int	ft_hex_printer(unsigned int nbr, const char n)
{
	if (nbr == 0)
	{
		return (write(1, "0", 1));
	}
	else
		ft_puthex(nbr, n);
	return (ft_hex_size(nbr));
}
