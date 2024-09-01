/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:03:56 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/23 03:57:42 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

int	is_valid(char *base)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	while (i < len)
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (*(base + j) == *(base + i))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_number(unsigned int nbr, unsigned int n, char *base)
{
	if (nbr < n)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		print_number(nbr / n, n, base);
		write(1, &base[nbr % n], 1);
	}	
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	if (is_valid(base))
	{
		n = ft_strlen(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * (-1);
		}
		print_number(nbr, n, base);
	}
}
