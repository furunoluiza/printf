/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upper_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:02:31 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 21:04:00 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_upper_x(unsigned long c)
{
	char *ptr;
	int count;
	
	count = 0;
	ptr = utoa(c, "0123456789ABCDEF");
	count += print_string(ptr);
	free(ptr);
	return (count);
}
