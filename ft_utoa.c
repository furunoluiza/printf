/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:22:55 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/30 08:28:13 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static int	count_num(unsigned long c, int base)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c = c / base;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned long c, char *str)
{
	char			*p;
	int				i;
	unsigned int	base;

	base = ft_strlen(str);
	i = count_num(c, base);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	p[i--] = '\0';
	if (c == 0)
		p[i] = str[0];
	while (c > 0)
	{
		p[i] = str[(c % base)];
		c = c / base;
		i--;
	}
	return (p);
}
/*#include <stdio.h>
int main(void)
{
	int	c;
	c = 0;
	char *p = "0123456789";
	printf("%s", ft_utoa(c, p));
}*/
