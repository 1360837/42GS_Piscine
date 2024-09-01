/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:55:14 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/22 23:36:51 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}

int	check_sign(char *str, int *idx)
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

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\f')
		return (1);
	if (c == '\r' || c == '\n' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	sign;

	i = 0;
	n = 0;
	while (is_space(*(str + i)))
		i++;
	sign = check_sign(str, &i);
	while (is_number(*(str + i)))
	{
		n = (n * 10) + (int)(*(str + i) - '0');
		i++;
	}
	return (n * sign);
}
