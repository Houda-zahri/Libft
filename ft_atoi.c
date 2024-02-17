/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzahri <hzahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:26:06 by hzahri            #+#    #+#             */
/*   Updated: 2023/11/30 17:31:11 by hzahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_f(const long test, const long res, int sign)
{
	if (test > res)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (2);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	j;
	long int	test;

	i = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		test = j;
		j = j * 10 + (str[i] - '0');
		if (over_f(test, j, sign) <= 0)
			return (j = over_f(test, j, sign));
		i++;
	}
	return (j *= sign);
}
