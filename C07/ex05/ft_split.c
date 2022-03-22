/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:00:21 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/22 20:31:42 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (i);
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	nbr;
	int	stridx;
	char	temp[ft_strlen(str)];
	char	**newstr;

	i = 0;
	nbr = 0;
	while (str[i] && (ft_strstr(str[i], charset) != 0))
	{
		nbr += 1;
		i++;
	}
	newstr = (char **)malloc(sizeof(char *) * (nbr + 1) + 1);
	i = 0;
	stridx = 0;
	while (str[i])
	{
		while (ft_strstr(str[i], charset) != 0)
		{
			j = ft_strstr(str[i], charset);
			stridx = 0;
			newstr[stridx] = (char *)malloc(sizeof(char) *
				((2 * ft_strlen(charset)) + j));
		}
		i++;
	}
}
