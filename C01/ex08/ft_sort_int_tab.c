/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:03:16 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/13 16:31:13 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] >= tab[i + 1])
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}
