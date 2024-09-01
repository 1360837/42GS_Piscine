/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:56:35 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 16:37:50 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *nbr, char *base);

char	*ft_itoa_base(int nbr, char *base);

int	is_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
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

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (is_space(base[i]))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		num;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	if (!nbr)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(num, base_to);
	return (result);
}
