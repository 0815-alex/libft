/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:24:22 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 20:14:37 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t len1;
  size_t len2;
  size_t len;
  
  len1 = ft_strlen(s1)+1;
  len2 = ft_strlen(s2)+1;
  len = n;
  
  if(len > len1 || len > len2)
  {
    if(len1>len2)
      len = len2;
    else
      len = len1;
  }
  return(ft_memcmp(s1, s2, len));
}

