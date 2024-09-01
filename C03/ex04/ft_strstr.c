/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:56:51 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/19 01:10:20 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	i = 0;
	while (*str)
	{
		if (!*(to_find + i))
			return (str);
		if (*(str + i) == *(to_find + i))
			i++;
		else
		{
			str++;
			i = 0;
		}
	}
	return (0);
}
