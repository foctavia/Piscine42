/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:46:49 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/19 15:18:19 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkarg(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	long int	n;

	n = nbr;
	if (ft_checkarg(base) == 0)
		return ;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	i = 0;
	while (base[i])
		i++;
	if (n >= i)
	{
		ft_putnbr_base((n / i), base);
		ft_putnbr_base((n % i), base);
	}
	else
		ft_putchar(base[n]);
}
