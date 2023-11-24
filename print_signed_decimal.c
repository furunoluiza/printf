/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:41:11 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/24 13:41:55 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_signed_decimal(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * (-1);
		write (1, "-", 1);
		print_signed_decimal(n);
		count++;
	}
	else if (n > 9)
	{
		print_signed_decimal(n / 10);
		print_signed_decimal(n % 10);
	}
	else
	{
		n = n + 48;
		write (1, &n, 1);
		count++;
	}
	return (count);
}
