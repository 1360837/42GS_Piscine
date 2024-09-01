/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:54:59 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/24 15:19:30 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\f')
		return (1);
	if (c == '\r' || c == '\n' || c == '\v')
		return (1);
	return (0);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		if (is_space(base[i]))
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
	if (i < 2)
		return (0);
	return (1);
}

int	check_sign(char *str, unsigned int *idx)
{
	int	sign;

	sign = 1;
	while (*(str + *idx) == '-' || *(str + *idx) == '+')
	{
		if (*(str + *idx) == '-')
			sign *= -1;
		(*idx)++;
	}
	return (sign);
}

int	find_num(char c, char *base)
{
	int	i;

	i = 0;
	while (*(base + i))
	{
		if (c == *(base + i))
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	m;
	int				x;
	int				sign;

	if (!is_valid(base))
		return (0);
	i = 0;
	n = 0;
	m = 0;
	while (*(base + m))
		m++;
	while (is_space(*(str + i)))
		i++;
	sign = check_sign(str, &i);
	while (*(str + i))
	{
		x = find_num(*(str + i), base);
		if (x == -1)
			break ;
		n = (n * m) + x;
		i++;
	}
	return (n * sign);
}
