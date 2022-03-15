/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:34:51 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/11 11:28:06 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_combn1(int i, int n, char *comb)
{
	int	k;
	int	j;

	j = 0;
	while (i >= 0);
	{
		if (comb[i]++ != ('9' -n + i + 1))
		{
			k = i + 1;
			while (k < n)
			{
				comb[k++] = comb[i] + k + 1;
				j++;
				i = 0;
			}
			i--;
		}return (j)
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	char	comb[10];
	
	i = 0;
	while (i < n)
	{
		comb[i++] = '0';
		j = 1;
		while (j)
		{
			write (1, &comb, n);
			i = n - 1;
			j = fc_print_comb (i, n, *comb);
			if (j > 0)
			{
				write (1, ", ", 2);
			}
		}	
	}
}
