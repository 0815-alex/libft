/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:40:54 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 12:44:22 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	cpy_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (s_len <= start)
		cpy_len = 1;
	else if (s_len <= len)
		cpy_len = s_len - start + 1;
	else
		cpy_len = len + 1;
	sub = malloc(cpy_len);
	if (!sub)
		return (NULL);
	if (s_len <= start)
		sub[0] = 0;
	else
		ft_strlcpy(sub, &s[start], cpy_len);
	return (sub);
}
