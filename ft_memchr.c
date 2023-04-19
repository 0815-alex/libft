/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:24:50 by astein            #+#    #+#             */
/*   Updated: 2023/04/19 13:42:37 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	The  memchr() function scans the initial n bytes of the memory area
 * 			pointed to by s for the first instance of c.  Both c and the bytes
 * 			of the memory area pointed to by s are interpreted as unsigned char.
 * @param	s	The string to search in
 * @param	c	The character which should be found 
 * @param	n	amount of bytes in which to search
 * @return	void*	pointer to the matching byte
 * 					NULL if c does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
