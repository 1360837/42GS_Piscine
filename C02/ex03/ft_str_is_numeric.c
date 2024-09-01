/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:42:50 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/16 16:49:36 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (is_numeric(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
