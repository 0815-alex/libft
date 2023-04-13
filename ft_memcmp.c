/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:25:08 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 19:37:35 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *c1;
  unsigned char *c2;
  c1 = (unsigned char *)s1;
  c2 = (unsigned char *)s2;
  size_t	i;

  i = 0;
  if(!n)
    return (0);

	while (i < n-1 && c1[i] == c2[i])
		i++;
	return ((int)c1[i] - (int)c2[i]);
}
