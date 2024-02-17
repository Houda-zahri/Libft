/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:27:02 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/29 18:35:44 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_len(int l)
{
	int	len;

	len = 1;
	while (l > 9 || l < -9)
	{
		l = (l / 10);
		len++;
	}
	return (len);
}

static void	*to_str(int len, int n, char *ptr)
{
	int	num;

	num = 0;
	if (n == 0)
		ptr[len--] = '0';
	while (n > 0)
	{
		num = n % 10;
		ptr[len--] = num + '0';
		n = (n - num) / 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	ptr = NULL;
	len = c_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		len++;
		n = n * (-1);
		ptr = malloc(len + 1);
		if (ptr == 0)
			return (NULL);
		ptr[0] = '-';
	}
	else
		ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len--] = '\0';
	ptr = to_str(len, n, ptr);
	return (ptr);
}
