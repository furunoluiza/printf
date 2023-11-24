/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:56:51 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/23 16:03:14 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower_hex(unsigned long c)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = ft_utoa(c, "0123456789abcdef");
	count = print_string(ptr);
	free(ptr);
	return (count);
}
