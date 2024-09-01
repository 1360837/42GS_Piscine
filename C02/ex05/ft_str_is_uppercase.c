/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:02:09 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/16 17:05:02 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (is_uppercase(*str) == 0)
			return (0);
		str++;
	}	
	return (1);
}
