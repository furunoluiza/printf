/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:41:11 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/27 10:46:25 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_contmem(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa(int n)
{
	int		i;
	long	numb;
	char	*p;

	numb = n;
	i = ft_contmem(numb);
	p = malloc ((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (numb < 0)
	{
		numb *= -1;
		p[0] = '-';
	}
	p[i] = '\0';
	i--;
	if (numb == 0)
		p[i] = numb + 48;
	while (numb > 0)
	{
		p[i] = (numb % 10) + 48;
		numb = numb / 10;
		i--;
	}
	return (p);
}

int	print_signed_decimal(int n)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(n);
	count = print_string(str);
	free (str);
	return (count);
}
/*#include <stdio.h>
int	main()
{
//	int	i = print_signed_decimal(-2147483648);
//	int	j = print_signed_decimal(-42);
//	int	u = print_signed_decimal(0);
//	int	y = print_signed_decimal(8);
	int	h = print_signed_decimal(-2148);
	printf("\n%d", h);
//	printf("%d\n %d\n %d\n %d\n %d\n", i, j, u ,y, h);
}*/
