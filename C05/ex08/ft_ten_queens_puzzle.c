/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 03:13:43 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/24 23:33:38 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int *buf)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = buf[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_valid(int col, int *buf)
{
	int	c;

	c = 0;
	while (c < col)
	{
		if (buf[c] == buf[col])
			return (0);
		if ((buf[c] - c) == (buf[col] - col))
			return (0);
		if ((buf[c] + c) == (buf[col] + col))
			return (0);
		c++;
	}
	return (1);
}

void	solve(int *buf, int col, int *cnt)
{
	int	num;

	if (col == 10)
		return ;
	num = 0;
	while (num < 10)
	{
		buf[col] = num;
		if (is_valid(col, buf))
		{
			if (col == 9)
			{
				print_result(buf);
				(*cnt)++;
			}
			else
				solve(buf, col + 1, cnt);
		}
		num++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	buf[10];
	int	cnt;

	cnt = 0;
	solve(buf, 0, &cnt);
	return (cnt);
}
