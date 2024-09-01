/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:33:37 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/28 21:17:16 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char t, char o)
{
	char	temp_o;
	char	temp_t;

	temp_t = t;
	temp_o = o + 1;
	while (temp_t <= '9')
	{
		while (temp_o <= '9')
		{
			write(1, &t, 1);
			write(1, &o, 1);
			write(1, " ", 1);
			write(1, &temp_t, 1);
			write(1, &temp_o, 1);
			if (t != '9' || o != '8')
				write(1, ", ", 2);
			temp_o++;
		}
		temp_t++;
		temp_o = '0';
	}
}

void	ft_print_comb2(void)
{
	char	t;
	char	o;

	t = '0';
	while (t <= '9')
	{
		o = '0';
		while (o <= '9')
		{
			ft_print_num(t, o);
			o++;
		}
		t++;
	}
}
