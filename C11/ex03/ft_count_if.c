/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:51:11 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/30 22:56:52 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	cnt;
	int	idx;

	idx = 0;
	cnt = 0;
	while (idx < length)
	{
		if (f(tab[idx]) != 0)
			cnt++;
		idx++;
	}
	return (cnt);
}
