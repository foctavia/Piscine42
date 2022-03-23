/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:00:21 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/23 19:16:11 by foctavia         ###   ########.fr       */
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

int	find_substr(char *str, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	nbr = 0;
	if (str[0] != sep[0])
		count++;
	while (str[i])
	{
		while (str[i] && str[i] == sep[j])
		{
			j++;
			i++;
			if ((sep[j] == '\0' && str[i] != '\0')
				|| (sep[j] == '\0' && sep[0] != str[0]))
				count++;
		}
		i++;
		j = 0;
	}
	return (count);
}

int	find_post(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] && str[i + j] == sep[j])
		{
			j++;
			if (sep[j] == '\0')
			return (i);
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*ft_strcpycat(char *str, char *sep, char *temp)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (sep[k])
		temp[i++] = sep[k++];
	k = 0;
	while (str[j] && str[j] != sep[k])
		temp[i++] = str[j++];
	while (str[j] == sep[k] && str[j + 1] == sep[k + 1])
		temp[i++] = str[j++];
	temp[i] = '\0';
	return (temp);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	str_idx;
	char	temp[ft_strlen(str)];
	char	**newstr;

	newstr = (char **)malloc(sizeof(char *) * find_substr(str, charset));
	i = 0;
	j = 0;
	str_idx = 0
	if (str[0] != charset[0])
	{
		while (str[i])
		{
			temp[j] = str[i]
		str[str_idx] = (char *)malloc(sizeof(char) *
	}
}
