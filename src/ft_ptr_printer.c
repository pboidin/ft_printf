/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:11:57 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/10 19:37:23 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_size(uintptr_t nbr)
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

void	ft_putptr(uintptr_t nbr)
{
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16);
		ft_putptr(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
			ft_putchar_fd((nbr - 10 + 'a'), 1);
	}
}

int	ft_ptr_printer(unsigned long long ptr)
{
	int	print_size;

	print_size = 0;
	print_size += write(1, "0x", 2);
	if (ptr == 0)
		print_size += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_size += ft_ptr_size(ptr);
	}
	return (print_size);
}
