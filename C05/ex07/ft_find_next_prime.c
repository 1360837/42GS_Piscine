/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:57:40 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/23 03:49:44 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	x_;
	int	cnt;

	x = nb / 2;
	x_ = 0;
	cnt = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x != x_ && cnt < 100)
	{
		x_ = x;
		x = (nb / x_ + x_) / 2;
		cnt++;
	}
	return (x);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;
	int	sqrt_temp;

	if (nb <= 1)
		return (2);
	while (1)
	{
		i = 2;
		flag = 1;
		sqrt_temp = ft_sqrt(nb);
		while (i <= sqrt_temp)
		{
			if ((nb % i) == 0)
			{
				flag = 0;
				break ;
			}
			i++;
		}
		if (flag)
			return (nb);
		nb++;
	}
}
