/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:37:52 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 21:33:28 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	is_space(char c);

int	check_sign(char *str, unsigned int *idx);

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

int	check_digit(int nbr, char *base)
{
	int				base_len;
	int				digit;
	unsigned int	num;

	digit = 0;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		digit++;
		num = -nbr;
	}
	else
		num = nbr;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= base_len;
		digit++;
	}
	return (digit);
}	

char	*ft_itoa_base(int nbr, char *base)
{
	char			*result;
	int				digit;
	unsigned int	num;

	digit = check_digit(nbr, base);
	result = (char *)malloc(digit + 1);
	if (!result)
		return (NULL);
	result[digit--] = '\0';
	num = (unsigned int)nbr;
	if (nbr < 0)
	{
		num = -(unsigned int)nbr;
		result[0] = '-';
	}
	if (num == 0)
		result[0] = base[0];
	while (num > 0)
	{
		result[digit--] = base[num % ft_strlen(base)];
		num /= ft_strlen(base);
	}
	return (result);
}
