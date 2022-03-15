/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:03:41 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/10 19:44:48 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr (a / 10 + '0');
			ft_putnbr (a % 10 + '0');
			write (1, " ", 1);
			ft_putnbr (b / 10 + '0');
			ft_putnbr (b % 10 + '0');
			write (1, ", ", 2);
			b++;
		}
		a++;
	}
	write (1, "\b\b", 2);
}
