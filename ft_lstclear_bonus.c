/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:25:19 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/26 16:32:27 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*m;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		m = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = m;
	}
}
