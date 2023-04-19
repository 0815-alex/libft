/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:38 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 21:25:22 by astein           ###   ########.fr       */
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

int	wrdlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		w;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	w = cnt_wrds(s, c);
	res = malloc(sizeof(char *) * (w + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < w)
	{
		while (*s == c && *s != '\0')
			s++;
		len = wrdlen(s, c);
		res[i] = ft_substr(s, 0, len);
		if (!res[i])
			return (NULL);
		s += len;
		i++;
	}
	res[w] = NULL;
	return (res);
}
