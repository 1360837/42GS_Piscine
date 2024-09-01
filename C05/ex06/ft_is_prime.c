/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:53:19 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/23 03:48:05 by jiwnam           ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	int	i;
	int	sq_root;

	if (nb <= 1)
		return (0);
	i = 2;
	sq_root = ft_sqrt(nb);
	while (i <= sq_root)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
