/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:24:30 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/25 04:50:53 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*mal;

	i = 0;
	while (src[i] != '\0')
		i++;
	mal = (char *)malloc(1 + i);
	if (!mal)
		return (NULL);
	i = 0;
	while (src[i])
	{
		mal[i] = src[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}
