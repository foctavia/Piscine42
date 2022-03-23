/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:12:17 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/23 10:27:20 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	long int	i;
	long int	diff;

	diff = (long int) max - min;
	nbr = (int *)malloc(sizeof(int) * diff);
	if (!nbr || min >= max)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		nbr[i] = min + i;
		i++;
	}
	return (nbr);
}

