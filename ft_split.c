/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:38 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 17:24:23 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	**free_tab(char **result)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!result)
// 		return (NULL);
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		result[i] = NULL;
// 		i++;
// 	}
// 	free(result);
// 	result = NULL;
// 	return (NULL);
// }

static int	cnt_wrds(char const *s, char c)
{
	int	cnt;
	int	nw_wrd;

	cnt = 0;
	nw_wrd = 1;
	while (*s)
	{
		if (nw_wrd == 1 && *s != c)
		{
			cnt++;
			nw_wrd = 0;
		}
		else if (*s == c)
			nw_wrd = 1;
		s++;
	}
	return (cnt);
}

// static int	ft_cpy_wrds(char *s, char **result, char c, int arr_len)
// {
// 	int	arr_i;
// 	int	wrd_i;
// 	int	str_len;

// 	arr_i = -1;
// 	while (++arr_i < arr_len - 1)
// 	{
// 		//s = ft_strtrim(s, &c);
// 		while (*s == c && *s)
// 			s++;
// 		str_len = 0;
// 		while (s[str_len] && s[str_len] != c)
// 			str_len++;
// 		result[arr_i] = malloc(str_len + 1);
// 		if (!result[arr_i])
// 			return (0);
// 		wrd_i = -1;
// 		while (++wrd_i < str_len)
// 			result[arr_i][wrd_i] = s[wrd_i];
// 		result[arr_i][wrd_i] = 0;
// 		s += str_len;
// 	}
// 	return (1);
// }

static int	ft_cpy_wrd(char *src, char **dest, int dest_index, char c)
{
	int	n;
	int	wrd_i;
	int	str_len;

	n = 0;
	while (src[n])
	{
		if (src[n] == c)
			break ;
		n++;
	}
	str_len = n + 1;
	dest[dest_index] = malloc(sizeof(**dest) * str_len);
	wrd_i = 0;
	while (wrd_i < n)
	{
		dest[dest_index][wrd_i] = src[wrd_i];
		wrd_i++;
	}
	dest[dest_index][wrd_i] = 0;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**result;
	int		i;

	s = ft_strtrim(s, &c);
	arr_len = cnt_wrds(s, c) + 1;
	result = malloc(arr_len);
	if (!result)
		return (NULL);
	// if (!ft_cpy_wrds((char *)s, result, c, arr_len))
	// 	return (free_tab(result));
	i = 0;
	while (i < arr_len - 1)
	{
		while (*s == c && *s)
			s++;
		s += ft_cpy_wrd((char *)s, result, i, c);
		i++;
	}
	result[arr_len - 1] = 0;
	return (result);
}
