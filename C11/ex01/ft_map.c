/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:42:04 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/30 22:54:52 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	idx;
	int	*result;

	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);
	idx = 0;
	while (idx < length)
	{
		result[idx] = f(tab[idx]);
		idx++;
	}
	return (result);
}
