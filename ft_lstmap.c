/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:09:43 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 14:25:24 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	head = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			while (head)
			{
				tmp = head->next;
				ft_lstdelone(head, del);
				head = tmp;
			}
		}	
		if (!head)
			head = tmp;
		else
			ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
