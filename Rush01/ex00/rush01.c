/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:23:19 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/21 03:54:01 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(int b[4][4], int hint[16], int r, int c);

int	skyscraper(int b[4][4], int hint[16], int r, int c)
{
	int	num;

	if (r == 4)
		return (1);
	num = 1;
	while (num <= 4)
	{
		b[r][c] = num;
		if (is_valid(b, hint, r, c))
		{
			if (c == 3)
			{
				if (skyscraper(b, hint, r + 1, 0))
					return (1);
			}
			else if (skyscraper(b, hint, r, c + 1))
				return (1);
		}
		num++;
	}
	b[r][c] = 0;
	return (0);
}

void	print_boxes(int b[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = b[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
