/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:05:06 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/25 04:50:19 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ca1;
	unsigned char	*ca2;
	size_t			i;

	ca1 = (unsigned char *)dst;
	ca2 = (unsigned char *)src;
	i = 0;
	if (!ca1 && !ca2)
		return (NULL);
	if (ca1 <= ca2)
	{
		while (i < len)
		{
			ca1[i] = ca2[i];
			i++;
		}
	}
	else 
		while (len-- > 0)
			ca1[len] = ca2[len];
	return (dst);
}
