/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:04 by astein            #+#    #+#             */
/*   Updated: 2023/04/13 21:30:18 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
  size_t i;
  size_t len;
  
  i = -1;
  len = ft_strlen(s) + 1;
  if(!s)
    return(NULL);
  
  char *dup;
  dup = malloc(len);
  if(!dup)
    return(NULL);

  ft_strlcpy(dup, s,len);
  return(dup);
}
