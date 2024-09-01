/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:36:19 by jiwnam            #+#    #+#             */
/*   Updated: 2024/08/29 14:34:34 by jiwnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset) && !flag)
		{
			flag = 1;
			count++;
		}
		else if (is_in_charset(*str, charset))
			flag = 0;
		str++;
	}
	return (count);
}

char	*word_copy(char *start, char *end)
{
	char	*word;
	int		len;
	int		i;

	len = end - start;
	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*word_start;
	int		words;
	int		i;

	words = word_count(str, charset);
	i = 0;
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			word_start = str;
			while (*str && !is_in_charset(*str, charset))
				str++;
			result[i++] = word_copy(word_start, str);
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}
