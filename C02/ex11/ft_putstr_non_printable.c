/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:50:54 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/15 19:33:56 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_hexnum(unsigned char c)
{
	char	*hexnum;

	ft_putchar(92);
	hexnum = "0123456789abcdef";
	ft_putchar(hexnum[c / 16]);
	ft_putchar(hexnum[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexnum((unsigned char)str[i]);
		else if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		i++;
	}
}
