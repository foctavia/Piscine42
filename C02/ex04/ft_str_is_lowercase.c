/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:19:57 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/14 17:24:32 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while ((str[i] != '\0') && (n != 0))
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			n = 0;
		else
			i++;
	}
	return (n);
}