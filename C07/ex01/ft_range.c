/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:12:17 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/22 16:20:04 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	i;

	nbr = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		nbr[i] = min + i;
		i++;
	}
	return (nbr);
}
