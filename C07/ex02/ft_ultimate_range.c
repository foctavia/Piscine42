/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:51:40 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/22 18:06:35 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nbr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr = (int *)malloc(sizeof(int) * (max - min));
	if (!nbr)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		nbr[i] = min + i;
		i++;
	}
	*range = nbr;
	return (i);
}
