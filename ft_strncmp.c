/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:35:17 by hzahri            #+#    #+#             */
/*   Updated: 2023/12/02 15:38:22 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n > 0)
		while (i < n - 1 && (((unsigned char)s1[i] == (unsigned char)s2[i]) 
				&& ((unsigned char)s1[i] || (unsigned char)s2[i])))
			i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
