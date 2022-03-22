/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:19:07 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/20 12:22:57 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 0)
		return (0);
	while (argc > 1)
	{
		ft_putstr(argv[argc -= 1]);
		write (1, "\n", 1);
	}
	return (1);
}
