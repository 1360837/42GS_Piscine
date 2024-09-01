/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:42:02 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/31 17:55:27 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		is_number(char c);
int		check_sign(char *str, int *idx);
int		is_space(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
