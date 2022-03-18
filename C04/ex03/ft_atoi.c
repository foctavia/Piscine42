/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:49:03 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/18 12:29:10 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] && n != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			n = 0;
		else
		{
			str[i] -= 48;
			i++;
		}
	}
	return (n);
}

int	ft_posneg(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((str[i] == '+' || str[i] == '-') && n != 0)
	{
		if ((str[i] == '-' && n != -1) ||
			(str[i] == '-' && str[i - 1] == '-'))
			n *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		return (n);
	else
		return (0);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		c == '\v' || c == '\f' || c  == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 1;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			&& n != 0)
			n = ft_isspace(str[i]);
		if ((str[i] == '+' || str[i] == '\n') && n != 0)
			n = ft_posneg(str[i]);
		if (str[i] >= '0' && str[i] <= '9' && n != 0)
			j = n * ft_str_is_numeric(str[i]);
		else if (str[i] < '0' || str[i] > '9' || n == 0);
			j = 0;
		i++;
	}
	return (j);
}
