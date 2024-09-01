/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 00:21:38 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/29 16:15:45 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(dest + i))
		i++;
	while (*src)
		*(dest + i++) = *(src++);
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_cat_str_sep(int total, int size, char **strs, char *sep)
{
	char	*result;
	int		idx;

	idx = 0;
	result = (char *)malloc(total + 1);
	*result = '\0';
	if (result == NULL)
		return (NULL);
	while (idx < size)
	{
		ft_strcat(result, strs[idx]);
		if (idx < size - 1)
			ft_strcat(result, sep);
		idx++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	result = ft_cat_str_sep(total_len, size, strs, sep);
	return (result);
}
