/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 02:37:38 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/29 17:53:30 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(char *comb, int n)
{
	int	i;

	while (1)
	{
		write(1, comb, n);
		if (comb[0] == '9' - n + 1)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0)
		{
			if (comb[i] < '9' - (n - 1 - i))
			{
				comb[i]++;
				while (++i < n)
					comb[i] = comb[i - 1] + 1;
				break ;
			}
			i--;
		}
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	if (n < 1 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
	print_combination(comb, n);
}
