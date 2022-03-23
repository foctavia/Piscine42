/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foctavia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:51:40 by foctavia          #+#    #+#             */
/*   Updated: 2022/03/23 19:58:05 by foctavia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	long int	diff;

	diff = (long int) max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (diff));
	if (!*range)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
