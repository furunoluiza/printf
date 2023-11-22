/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:36:25 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 20:57:23 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_pointer(unsigned long c)
{
	char *ptr;
	int	count;

	count = 0;
	count = print_string("0x");
	ptr = utoa(c, "0123456789abcdef");
	count += print_string(ptr);
	free(ptr);
	return (count);
}
