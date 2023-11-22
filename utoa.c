/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:59:31 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 20:59:44 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_num(unsigned long c)
{
	int	i;

	i = 0;
	while (c != 0)
	{
		c = c / 16;
		i++;
	}
	return (i);
}

char	*utoa(unsigned long c, char *hex)
{
	char *p;
	int	i;

	i = count_num(c);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	p[i--] = '\0';
	while (c > 16)
	{
		p[i] = hex[(c % 16)];
		c = c / 16;
		i--;
	}
	if (c <= 16)
		p[i] = hex[c];
	return (p);
}

#include <stdio.h>
int main(void)
{
	int	c;
	c = 255;
	char *p = "0123456789abcdef";
	printf("%s", utoa(c, p));
}
