/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 02:36:33 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/12 12:03:05 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec_putnbr(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
		return ;
	}
	else
	{
		rec_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		rec_putnbr(nb);
	else
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			rec_putnbr(nb * -1);
		}
	}
}
