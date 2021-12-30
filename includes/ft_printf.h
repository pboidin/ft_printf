/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:29:39 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/10 20:40:31 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putperc(void);
int	ft_str_printer(char *str);
int	ft_nbr_printer(int n);
int	ft_uns_nbr_printer(unsigned int n);
int	ft_hex_printer(unsigned int nbr, const char format);
int	ft_ptr_printer(unsigned long long ptr);
int	ft_printf(const char *str, ...);

#endif