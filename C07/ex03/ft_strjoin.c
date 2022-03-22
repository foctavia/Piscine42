/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:56:34 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/22 11:31:52 by foctavia         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		newlen;
	char	*newstr;

	if (size == 0)
		return (0);
	newlen = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		newlen += ft_strlen(strs[i]);
		i++;
	}
	newlen += 1;
	newstr = malloc(sizeof(char) * newlen);
	ft_strcpy(newstr, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(newstr, sep);
		ft_strcat(newstr, strs[i]);
		i++;
	}
	return (newstr);
}
