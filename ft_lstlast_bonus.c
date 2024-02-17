/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:02:56 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/26 16:25:16 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*m;

	m = lst;
	if (!lst)
		return (NULL);
	if (m == NULL)
		return (NULL);
	while (m->next != NULL)
	{
		m = m->next;
	}
	return (m);
}
