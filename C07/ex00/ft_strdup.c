/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:02:59 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 22:35:18 by jiwnam           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*src_cpy;

	len = ft_strlen(src);
	src_cpy = (char *)malloc(len + 1);
	if (!src_cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(src_cpy + i) = *(src + i);
		i++;
	}
	*(src_cpy + i) = '\0';
	return (src_cpy);
}
