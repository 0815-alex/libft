/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:45:20 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 17:20:23 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  char *ptr;
  ptr = (char *)s;
  if((unsigned char) c == '\0')
    return(&ptr[ft_strlen(s)]);
  while(*ptr)
  {
    if(*ptr == (unsigned char)c)
      return (ptr);
    ptr++;
  }  
  return (NULL);
}
