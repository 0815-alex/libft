/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:11:48 by astein            #+#    #+#             */
/*   Updated: 2023/04/17 16:36:01 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	void	*new_content;

	new_lst = NULL;
	current = new_lst;
	while (lst)
	{
		new_content = (f(lst->content));
		if (new_content)
		{
			if (current)
			{
				current->next = ft_lstnew(new_content);
				current = current->next;
			}
			else
			{
				new_lst = ft_lstnew(new_content);
				current = new_lst;
			}
		}
		else
			del(lst->content);
		lst = lst->next;
	}
	return (new_lst);
}
