/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:30:28 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/27 21:32:30 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fu_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] && fu_check(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
		return (ft_substr(s1, 0, 0));
	while (end > 0 && fu_check(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
