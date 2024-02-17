/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:01:49 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/28 17:07:40 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			del(tmp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
