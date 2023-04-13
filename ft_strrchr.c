/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:23:53 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 17:43:41 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  char *ptr;
  ptr = (char *)s;
  ptr = &ptr[ft_strlen(s)];
  if((unsigned char)c == '\0')
    return(ptr);
  ptr--;
  while(ptr >= (char *)s)
  {
    if(*ptr == (unsigned char)c)
      return (ptr);
    ptr--;
  }  
  return (NULL);  
}
