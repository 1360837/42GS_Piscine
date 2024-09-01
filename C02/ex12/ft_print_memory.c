/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:29:32 by jiwnam            #+#    #+#             */
/*   Updated: 2024/09/01 00:15:22 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(void *addr)
{
	unsigned long	add;
	char			buf[16];
	int				i;

	i = 15;
	add = (unsigned long)addr;
	while (i >= 0)
	{
		buf[i--] = "0123456789abcdef"[add % 16];
		add /= 16;
	}
	write(1, buf, 16);
	write(1, ": ", 2);
}

void	print_hex(unsigned char c)
{
	char	buf[2];

	buf[0] = "0123456789abcdef"[(c / 16) % 16];
	buf[1] = "0123456789abcdef"[c % 16];
	write(1, buf, 2);
}

void	print_line(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)addr;
	print_addr(addr);
	i = 0;
	while (i < 16)
	{
		if (i < size)
			print_hex(str[i]);
		else
			write(1, "  ", 2);
		if (i++ % 2)
			write(1, " ", 1);
	}
	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_size;

	i = 0;
	while (i < size)
	{
		if (size - i > 16)
			line_size = 16;
		else
			line_size = size - i;
		print_line((unsigned char *)addr + i, line_size);
		i += 16;
	}
	return (addr);
}
