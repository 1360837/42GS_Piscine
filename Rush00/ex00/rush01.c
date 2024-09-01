/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eupark <eupark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 07:21:26 by eupark            #+#    #+#             */
/*   Updated: 2024/08/14 13:53:03 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_x(int x, char l, char mid, char r)
{
	ft_putchar(l);
	while (--x > 1)
		ft_putchar(mid);
	if (x == 1)
		ft_putchar(r);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_x(x, '/', '*', '\\');
		while (--y > 1)
			ft_x(x, '*', ' ', '*');
		if (y == 1)
			ft_x(x, '\\', '*', '/');
	}
	return ;
}
