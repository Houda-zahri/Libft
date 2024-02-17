/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:27:49 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/29 17:48:01 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ca1;
	unsigned char	*ca2;
	size_t			i;

	ca1 = (unsigned char *)dst;
	ca2 = (unsigned char *)src;
	i = 0;
	if (ca1 == NULL && ca2 == NULL)
		return (NULL);
	while (i < n)
	{
		ca1[i] = ca2[i];
		i++;
	}
	return (dst);
}
