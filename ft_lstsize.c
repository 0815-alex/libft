/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:30:26 by astein            #+#    #+#             */
/*   Updated: 2023/04/19 16:08:08 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Counts the number of nodes in the list 'lst'.
 * 
 * @param	lst	The beginning of the list.
 * @return	int	The length of the list
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*n;

	i = 0;
	n = lst;
	while (n)
	{
		n = n->next;
		i++;
	}
	return (i);
}
