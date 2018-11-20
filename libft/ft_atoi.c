/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:59:46 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/21 22:38:56 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int neg;
	int ans;

	ans = 0;
	neg = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n'
			|| *str == '\f' || *str == '\r')
		str++;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (neg == 1)
		return (-ans);
	else
		return (ans);
}
