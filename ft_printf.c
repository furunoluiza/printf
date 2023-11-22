/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:50:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 17:10:07 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...);
{
	va_list ap;
	int	write_count;

	write_count = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			write_count += handle_print(*fmt);
		}
		else 
			write(1, &fmt, 1);
		fmt++;
		write_count++;
	}
	va_end(ap);
	return (write_count);
}

int	handle_print(const char fmt, va_list ap)
{
	if (fmt == 'c')
		return (print_char(va_arg(ap, int)));
	if (fmt == 's')
		return (print_string(va_arg(ap, int)));
	if (fmt == 'p' || fmt == 'x' || fmt == 'X')
		return (print_hex(va_arg(ap, unsigned long), fmt));
	if (fmt == 'i' || fmt == 'u' || fmt == 'd')
		return (

} 
