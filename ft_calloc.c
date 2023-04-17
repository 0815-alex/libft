/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:17:50 by astein            #+#    #+#             */
/*   Updated: 2023/04/17 18:22:20 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	bytes;

	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}
