/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:10:45 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/26 00:20:32 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	nbr_range;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr_range = max - min;
	*range = (int *)malloc(sizeof(int) * nbr_range);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < nbr_range)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (nbr_range);
}
