/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:28:17 by piboidin          #+#    #+#             */
/*   Updated: 2021/10/11 01:09:09 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

static int	ft_itoa_len(int n)
{
	int	size;

	size = 0;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

static void	ft_isneg(int *n, int *neg, int *tmp)
{
	if (*n == -2147483648)
	{
		*n = *n + 1;
		*neg = -1;
		*tmp = 1;
		*n = *n * -1;
	}
	else if (*n < 0)
	{
		*neg = -1;
		*n = *n * -1;
		*tmp = 0;
	}
	else if (*n >= 0)
	{
		*neg = 1;
		*tmp = 0;
	}
}

static void	ft_itoa_printer(char *str, int len, int n, int tmp)
{
	while (n > 9)
	{
		str[len--] = (n % 10) + '0' + tmp;
		n = n / 10;
		tmp = 0;
	}
	str[len] = n + '0';
}

char	*ft_itoa(int n)
{
	int		neg;
	int		tmp;
	int		len;
	char	*str;

	ft_isneg(&n, &neg, &tmp);
	len = ft_itoa_len(n);
	if (neg == -1)
	{
		str = malloc((len + 2) * sizeof(char));
		if (!str)
			return (0);
		len++;
		str[0] = '-';
	}
	else
	{
		str = malloc((len + 1) * sizeof(char));
		if (!str)
			return (0);
	}
	str[len--] = '\0';
	ft_itoa_printer(str, len, n, tmp);
	return (str);
}

/*
** int	main()
** {
**	int	i;
**	char	*tab;
**
**	i = -2147483648;
**	tab = ft_itoa(i);
**	printf("Resultat = %s\n", tab);
**	return (0);
**}
*/
