/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:04:32 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/21 03:19:14 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	parse_input(char *input, int hint[16])
{
	int	i;
	int	j;

	if (ft_strlen(input) != 31)
		return (0);
	i = 0;
	j = 0;
	while (j < 16)
	{
		if (input[i] < '1' || input[i] > '4')
			return (0);
		hint[j] = input[i] - '0';
		if (input[i + 1] != ' ' && input[i + 1] != '\0')
			return (0);
		i += 2;
		j++;
	}
	return (1);
}
