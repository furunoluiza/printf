/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:42:15 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/27 09:55:22 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_decimal(unsigned long n)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = ft_utoa(n, "0123456789");
	count = print_string(ptr);
	free(ptr);
	return (count);
}
