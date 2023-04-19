/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:30:38 by astein            #+#    #+#             */
/*   Updated: 2023/04/19 13:31:32 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Returns the last node of the list lst.
 * 
 * @param	lst		The beginning of the list.
 * @return	t_list*	Last node of the list
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*n;

	n = lst;
	if (!n)
		return (NULL);
	while (n->next)
		n = n->next;
	return (n);
}
