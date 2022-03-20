/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:24:30 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/20 17:41:56 by foctavia         ###   ########.fr       */
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
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_sort_str(int size, char *str[])
{
	int	i;
	int	j;
	int	r;
	char	*swap[size];

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			r = ft_strcmp(str[i], str[i + 1]);
			if (r > 0)
			{
				swap[i] = str[i];
				str[i] = str[i + 1];
				str[i + 1] = swap[i];
			}
			j++;
		}
		i++;		
	}
}

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 0)
		return (0);
	ft_sort_str(argc - 1, &argv[i]);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (1);
}
