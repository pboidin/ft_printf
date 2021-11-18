/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:20:51 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/10 14:11:29 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_conversion(va_list argmts, const char format)
{
	int	print_size;

	print_size = 0;
	if (format == 'c')
		print_size += ft_putchar(va_arg(argmts, int));
	else if (format == 's')
		print_size += ft_str_printer(va_arg(argmts, char *));
	else if (format == 'p')
		print_size += ft_ptr_printer(va_arg(argmts, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_size += ft_nbr_printer(va_arg(argmts, int));
	else if (format == 'u')
		print_size += ft_uns_nbr_printer(va_arg(argmts, unsigned int));
	else if (format == 'x' || format == 'X')
		print_size += ft_hex_printer(va_arg(argmts, unsigned int), format);
	else if (format == '%')
		print_size += ft_putperc();
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_size;
	va_list	argmts;

	va_start(argmts, str);
	i = 0;
	print_size = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_size += ft_conversion(argmts, str[i + 1]);
			i++;
		}
		else
			print_size += ft_putchar(str[i]);
		i++;
	}
	va_end(argmts);
	return (print_size);
}
