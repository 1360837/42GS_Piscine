/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:08:28 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/18 16:08:29 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (is_lowercase(*(str + i)))
			*(str + i) = *(str + i) - 'a' + 'A';
		i++;
	}
	return (str);
}
