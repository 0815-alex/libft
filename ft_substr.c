/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:40:54 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 21:33:42 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
  char *sub;
  size_t i;
  size_t j;
  size_t s_len;

  i = 0;
  j = 0;
  s_len = ft_strlen(s);
  
  if(!s)
    return(NULL);
  if(s_len <= start)
    sub = malloc(1);
  else if(s_len <= len)
    sub = malloc(s_len - start + 1);
  else
    sub = malloc(len + 1);
  if(!sub)
    return(NULL);
  
  while (s[i])
  {
    if(i >= start && j < len)
    {
      sub[j] = s[i];  
      j++;
    }
    i++;
  }
  sub[j] = 0;
  return(sub);
}
