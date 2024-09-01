/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:22:28 by hyeolee2          #+#    #+#             */
/*   Updated: 2024/08/21 03:25:01 by hyeolee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	chk_l(int b[4][4], int r);
int	chk_r(int b[4][4], int r);
int	chk_u(int b[4][4], int c);
int	chk_d(int b[4][4], int c);
int	is_valid(int b[4][4], int hint[16], int r, int c);

int	chk_l(int b[4][4], int r)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (b[r][i] > max)
		{
			max = b[r][i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	chk_r(int b[4][4], int r)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 3;
	while (i >= 0)
	{
		if (b[r][i] > max)
		{
			max = b[r][i];
			visible++;
		}
		i--;
	}
	return (visible);
}

int	chk_u(int b[4][4], int c)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (b[i][c] > max)
		{
			max = b[i][c];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	chk_d(int b[4][4], int c)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 3;
	while (i >= 0)
	{
		if (b[i][c] > max)
		{
			max = b[i][c];
			visible++;
		}
		i--;
	}
	return (visible);
}

int	is_valid(int b[4][4], int hint[16], int r, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		if (b[r][i] == b[r][c])
			return (0);
		i++;
	}
	i = 0;
	while (i < r)
	{
		if (b[i][c] == b[r][c])
			return (0);
		i++;
	}
	if (c == 3)
		if (chk_l(b, r) != hint[8 + r] || chk_r(b, r) != hint[12 + r])
			return (0);
	if (r == 3)
		if (chk_u(b, c) != hint[c] || chk_d(b, c) != hint[4 + c])
			return (0);
	return (1);
}
