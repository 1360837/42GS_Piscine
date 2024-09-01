/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:09:28 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/18 16:10:18 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_alphanumeric(char c)
{
	if (is_lowercase(c))
		return (1);
	if (is_uppercase(c))
		return (1);
	if (is_number(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (i == 0 || !is_alphanumeric(*(str + i - 1)))
		{	
			if (is_lowercase(*(str + i)))
				*(str + i) = *(str + i) - 'a' + 'A';
		}
		else if (is_uppercase(*(str + i)))
			*(str + i) = *(str + i) - 'A' + 'a';
		i++;
	}	
	return (str);
}
