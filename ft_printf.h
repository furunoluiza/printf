/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:44:30 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/30 09:13:50 by lfuruno-         ###   ########.fr       */
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
int		print_pointer(void *p);
int		print_lower_hex(unsigned int c);
int		print_upper_hex(unsigned int c);
int		print_signed_decimal(int n);
int		print_unsigned_decimal(unsigned int n);
char	*ft_utoa(unsigned long c, char *str);
char	*ft_strchr(const char *s, int c);

#endif
