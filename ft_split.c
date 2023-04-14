/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:38 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 15:53:34 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_tab(char **result)
{
	size_t	i;

	i = 0;
	if (!result)
		return ;
	while (result[i])
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	result = NULL;
}

int	cnt_wrds(char const *s, char c)
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

// int	ft_cpy_wrds(char *src, char **dest, int dest_index, char c)
// {

// }

int	ft_cpy_wrd(char *src, char **dest, int dest_index, char c)
{
	int	n;
	int	i;
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
	i = 0;
	while (i < n)
	{
		dest[dest_index][i] = src[i];
		i++;
	}
	dest[dest_index][i] = 0;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		arr_len;
	char	**result;

	arr_len = cnt_wrds(s, c) + 1;
	result = malloc(sizeof(*result) * arr_len);
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < arr_len - 1)
	{
		while (*s == c && *s)
			s++;
		s += ft_cpy_wrd((char *)s, result, index, c);
		index++;
	}
	result[arr_len - 1] = 0;
	return (result);
}
