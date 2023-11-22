/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:44:30 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/22 10:00:54 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *fmt, ...);
int		print_char(int c);
int		print_string(char *c);
int		print_pointer(unsigned long c);
int		print_lower_x(unsigned long c);
int		print_decimal(long n);
int		ft_putnbr(long n);
char	*ft_utoa(unsigned long c, char *hex);

#endif
