/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:41:30 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/14 17:53:35 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while ((str[i] != '\0') && (n != 0))
	{
		if ((str[i] < 32) || (str[i] > 126))
			n = 0;
		else
			i++;
	}
	return (n);
}
