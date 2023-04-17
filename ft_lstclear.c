/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:11:23 by astein            #+#    #+#             */
/*   Updated: 2023/04/17 14:24:24 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	next = current->next;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current->content);
		current->content = NULL;
		free(current->next);
		current->next = NULL;
		current = next;
	}
	free(*lst);
	*lst = NULL;
}
