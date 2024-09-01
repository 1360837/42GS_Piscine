/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:30:24 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 01:40:32 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		write(1, "\n", 1);
		return ;
	}
	if (nb < 0)
	{
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		c = '0' + nb;
		write(1, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	while (par[idx].str)
	{
		ft_putstr(par[idx].str);
		ft_putnbr(par[idx].size);
		write(1, "\n", 1);
		ft_putstr(par[idx].copy);
		idx++;
	}
}
