/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:39:58 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/21 20:45:05 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_string(char *c)
{
	int	i;

	i = 0;

	if (!c)
		return (NULL);
	while (c[i] != '\0')
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
}