/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:36:25 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/23 21:45:23 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *p)
{
	char				*str;
	int					count;
	unsigned long long	adress;

	count = 0;
	adress = (unsigned long long)p;
	if (!adress)
	{
		count = print_string("(nil)");
		return (count);
	}
	count = print_string("0x");
	str = ft_utoa(adress, "0123456789abcdef");
	count += print_string(str);
	free(str);
	return (count);
}
