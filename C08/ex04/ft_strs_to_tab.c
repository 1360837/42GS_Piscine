/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:47:40 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 04:16:29 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*result;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	result = (char *)malloc(src_len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			idx;

	if (ac < 0 || av == NULL)
		return (NULL);
	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	idx = 0;
	while (idx < ac && av[idx])
	{
		result[idx].str = av[idx];
		result[idx].size = ft_strlen(av[idx]);
		result[idx].copy = ft_strdup(av[idx]);
		if (result[idx].copy == NULL)
			return (NULL);
		idx++;
	}
	result[idx].str = NULL;
	return (result);
}
