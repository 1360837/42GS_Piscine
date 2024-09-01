/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:00:15 by jiwnam            #+#    #+#             */
/*   Updated: 2024/09/01 17:17:28 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft.h"

int	is_op(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len == 1)
	{
		if (str[0] == '+' || str[0] == '-' || str[0] == '*')
			return (1);
		if (str[0] == '/' || str[0] == '%')
			return (1);
	}
	return (0);
}

int	do_op(int x, char op, int y)
{
	if (op == '+')
		return (x + y);
	if (op == '-')
		return (x - y);
	if (op == '/')
		return (x / y);
	if (op == '%')
		return (x % y);
	if (op == '*')
		return (x * y);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (argc == 4)
	{
		if (is_op(argv[2]))
		{
			if (argv[2][0] == '/' && argv[3][0] == '0')
			{
				write(1, "Stop : division by zero\n", 24);
				return (0);
			}
			if (argv[2][0] == '%' && argv[3][0] == '0')
			{
				write(1, "Stop : modulo by zero\n", 22);
				return (0);
			}
			result = do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
			ft_putnbr(result);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
}
