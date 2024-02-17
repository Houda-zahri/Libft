/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:39:16 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/26 16:51:33 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*m;
	int		i;

	m = lst;
	i = 0;
	if (!lst)
		return (0);
	while (m != NULL)
	{
		i++;
		m = m->next;
	}
	return (i);
}
