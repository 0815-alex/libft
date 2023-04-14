/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:25:23 by astein            #+#    #+#             */
/*   Updated: 2023/04/14 19:49:07 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	result = (char *)big;
	if (!little[0])
		return (result);
	while (result[i] && i < len)
	{
		j = 0;
		while (result[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return (&result[i]);
		}
		i++;
	}
	return (NULL);
}
