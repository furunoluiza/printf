/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:15:19 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 21:20:50 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		n = n * (-1);
		write (1, "-", 1);
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + 48;
		write (1, &n, 1);
	}
}
