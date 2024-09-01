/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:05:12 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/30 23:44:25 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	asc;
	int	dsc;
	int	idx;

	asc = 0;
	dsc = 0;
	idx = 0;
	while (idx + 1 < length)
	{
		if (f(tab[idx], tab[idx + 1]) > 0)
			dsc++;
		else if (f(tab[idx], tab[idx + 1]) < 0)
			asc++;
		idx++;
	}
	if (!asc || !dsc)
		return (1);
	return (0);
}
