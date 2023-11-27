/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:50:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/27 10:47:27 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_print(const char fmt, va_list ap)
{
	int	count;

	count = 0;
	if (fmt == 'c')
		count += print_char(va_arg(ap, int));
	else if (fmt == 's')
		count += print_string(va_arg(ap, char *));
	else if (fmt == 'p')
		count += print_pointer(va_arg(ap, void *));
	else if (fmt == 'x')
		count += print_lower_hex(va_arg(ap, unsigned long));
	else if (fmt == 'X')
		count += print_upper_hex(va_arg(ap, unsigned long));
	else if (fmt == 'u')
		count += print_unsigned_decimal(va_arg(ap, unsigned long));
	else if (fmt == 'i' || fmt == 'd')
		count += print_signed_decimal(va_arg(ap, int));
	else if (fmt == '%')
		count += print_char(fmt);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		write_count;

	write_count = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && ft_strchr("cspdiuxX%", ++fmt))
		{
			write_count += handle_print(fmt, ap);
		}
		else
		{
			write(1, &(*fmt), 1);
			write_count += 1;
		}
		fmt++;
	}
	va_end(ap);
	return (write_count);
}
