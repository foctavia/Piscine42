/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:10:57 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/23 21:18:53 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

int	checkarg(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	size;
	int	neg;
	int	nbr;

	i = 0;
	neg = 1;
	nbr = 0;
	size = ft_strlen(base);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && ft_check_base(str[i], base) != -1)
	{
		nbr = ((nbr * size) + ft_check_base(str[i], base));
		i++;
	}
	return (nbr * neg);
}

int	nbrlen(int nbr, int size)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr >= size)
	{
		nbr /= size;
		len++;
	}
	return (len++);
}

void	putnbr_base(int nbr, char *base, char *result, int idx)
{
	long int	baselen;
	long int	n;

	n = nbr;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;	
	}
	baselen = ft_strlen(base);
	if (n >= baselen)
		putnbr_base((n / baselen), base, result, idx - 1);
	result[idx] = base[n % baselen];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int	n;
	int	baselen;
	int	ttl_idx;

	if (!nbr || !base_from || !base_to || checkarg(base_to) == 0
		|| checkarg(base_from) == 0)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	baselen = ft_strlen(base_to);
	ttl_idx = nbrlen(n, baselen) + 1;
	result = malloc(sizeof(char) * ttl_idx);
	putnbr_base(n, base_to, result, ttl_idx - 1);
	result[ttl_idx] = '\0';
	return (result);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	nbr[] = "   -+-12345FAH";
	char	basefrom[] = "0123456789ABCDEF";
	char	baseto[] = "01";
//	int	n = ft_atoi_base(nbr, basefrom);
//	int	len = nbrlen(n, 2);

//	new = ft_convert_base(nbr, basefrom, baseto);
	printf ("%s\n", ft_convert_base(nbr, basefrom, baseto));
//	printf ("%d\n", n);
//	printf ("%d\n", len);
	return (0);
}
