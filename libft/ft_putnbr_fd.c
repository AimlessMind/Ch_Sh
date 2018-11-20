/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 07:08:45 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/21 22:34:03 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int new;

	if (n < 0)
	{
		new = -n;
		ft_putchar_fd('-', fd);
	}
	else
		new = n;
	if (new >= 10)
	{
		ft_putnbr_fd(new / 10, fd);
		ft_putchar_fd(new % 10 + '0', fd);
	}
	else
		ft_putchar_fd(new + '0', fd);
}
