/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:45:51 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 12:56:13 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	s3 = malloc(total_len);
	if (!s3)
		return (NULL);
	if (total_len != 1)
	{
		ft_memcpy(s3, s1, s1_len);
		ft_memcpy(&s3[s1_len], s2, s2_len);
	}
	s3[total_len - 1] = 0;
	return (s3);
}
