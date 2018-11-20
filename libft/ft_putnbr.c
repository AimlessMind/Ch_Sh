/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:34:21 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/21 22:35:57 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int new;

	if (n < 0)
	{
		new = -n;
		ft_putchar('-');
	}
	else
		new = n;
	if (new >= 10)
	{
		ft_putnbr(new / 10);
		ft_putchar(new % 10 + '0');
	}
	else
		ft_putchar(new + '0');
}
