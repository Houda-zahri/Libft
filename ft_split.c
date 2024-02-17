/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:22:26 by hzahri            #+#    #+#             */
/*   Updated: 2023/12/01 16:14:45 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c && ((i && s[i - 1] == c) || i == 0))
			len++;
		i++;
	}
	return (len);
}

static void	*free_arr(char **s, int j)
{
	while (j >= 0)
	{
		free(s[j]);
		j--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr2;

	if (!s)
		return (NULL);
	ptr2 = ft_calloc((count_str(s, c) + 1), sizeof(char *));
	if (ptr2 == NULL)
		return (NULL);
	j = 0;
	while (count_str(s, c))
	{
		i = 0;
		while (s[i] == c && s[i] != '\0')
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		ptr2[j] = ft_calloc((i + 1), 1);
		if (ptr2[j] == NULL)
			return (free_arr(ptr2, j));
		ft_strlcpy(ptr2[j], s, i + 1);
		j++;
		s += i;
	}
	return (ptr2);
}
