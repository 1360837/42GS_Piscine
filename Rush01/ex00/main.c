/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:12:13 by minjikim          #+#    #+#             */
/*   Updated: 2024/08/21 03:55:39 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		parse_input(char *input, int hint[16]);
int		is_valid(int b[4][4], int hint[16], int r, int c);
int		skyscraper(int b[4][4], int hint[16], int r, int c);
void	print_boxes(int b[4][4]);
void	print_error(void);

int	main(int argc, char **argv)
{
	int	b[4][4];
	int	hint[16];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			b[i][j++] = 0;
		i++;
	}
	if (argc != 2 || !parse_input(argv[1], hint))
	{
		print_error();
		return (1);
	}
	if (skyscraper(b, hint, 0, 0))
		print_boxes(b);
	else
		print_error();
	return (0);
}
