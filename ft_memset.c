/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:02:11 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/29 17:41:54 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	ca;
	unsigned char	*ca1;
	size_t			i;

	ca = (unsigned)c;
	ca1 = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ca1[i] = ca;
		i++;
	}
	return (b);
}
