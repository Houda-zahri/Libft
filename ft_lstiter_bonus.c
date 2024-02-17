/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:36:29 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/26 16:24:35 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*m;
	int		i;

	m = lst;
	i = 0;
	if (!lst || !f)
		return ;
	while (i < ft_lstsize(lst))
	{
		f(m->content);
		m = m->next;
		i++;
	}
}
