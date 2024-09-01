/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:13:03 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/19 01:45:34 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	while (*(src) && (i + 1 < size))
		*(dest + i++) = *(src++);
	*(dest + i) = '\0';
	if (dest_len > size)
		return (src_len + size);
	return (dest_len + src_len);
}
