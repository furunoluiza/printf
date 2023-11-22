/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:57:44 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/22 11:12:43 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower_x(unsigned long c)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = ft_utoa(c, "0123456789abcdef");
	count = print_string(ptr);
	free(ptr);
	return (count);
}
