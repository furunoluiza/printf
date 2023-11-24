/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:22:55 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/24 14:15:26 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_num(unsigned long c, int base)
{
	int	i;

	i = 0; 
	while (c != 0)
	{
		c = c / base;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned long c, char *str)
{
	char	*p;
	int		i;
	int		base;

	base = ft_strlen(str);
	i = count_num(c, base);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	p[i--] = '\0';
	while (c > base)
	{
		p[i] = str[(c % base)];
		c = c / base;
		i--;
	}
	if (c <= base)
		p[i] = str[c];
	return (p);
}
/*#include <stdio.h>
int main(void)
{
	int	c;
	c = 255;
	char *p = "0123456789abcdef";
	printf("%s", ft_utoa(c, p));
}*/
