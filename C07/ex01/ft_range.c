/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:12:38 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/25 23:28:32 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*arr;
	unsigned int	i;
	unsigned int	range;

	if (min >= max)
		return (NULL);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
