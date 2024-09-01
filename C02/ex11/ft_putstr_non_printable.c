/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:21:48 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/18 21:49:10 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	char	temp;

	while (*str)
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
		{
			temp = (unsigned char)*str;
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[(temp >> 4) & 0xF];
			hex[1] = "0123456789abcdef"[temp & 0xF];
			write(1, hex, 2);
		}
		str++;
	}
}
