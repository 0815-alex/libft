/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:11:48 by astein            #+#    #+#             */
/*   Updated: 2023/04/17 16:57:07 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = (f(lst->content));
		if (new_content)
			ft_lstadd_back(&new_lst, ft_lstnew(new_content));
		else
			del(lst->content);
		lst = lst->next;
	}
	return (new_lst);
}
