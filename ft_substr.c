/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:25:30 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/28 16:01:03 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (i < (start + len) && s[i] != '\0')
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
