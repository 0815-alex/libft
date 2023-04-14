/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:38 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 21:16:32 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_wrds(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	cur_word_len;
	int		w;
	int		arr_i;

	if (!s)
		return (NULL);
	w = cnt_wrds(s, c);
	result = malloc(sizeof(char *) * (w + 1));
	if (!result)
		return (NULL);
	arr_i = 0;
	while (arr_i < w)
	{
		while (*s == c && *s != '\0')
			s++;
		cur_word_len = 0;
		while (s[cur_word_len] && s[cur_word_len] != c)
			cur_word_len++;
		result[arr_i] = ft_substr(s, 0, cur_word_len);
		if (!result[arr_i])
			return (NULL);
		s += cur_word_len;
		arr_i++;
	}
	result[w] = NULL;
	return (result);
}
