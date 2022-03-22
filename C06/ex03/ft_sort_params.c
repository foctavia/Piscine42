/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:24:30 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/21 17:44:15 by foctavia         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1 && s2)
	{	
		if (s1[i] > s2[i])
			return (0);
		else if (s1[i] < s2[i])
			return (1);
		else if (s1[i] == 0 && s2[i] == 0)
			return (0);
		else
			i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 1)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	while (argc > 1)
	{
		ft_putstr(argv[argc -= 1]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
