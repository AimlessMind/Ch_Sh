/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 06:39:56 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/19 15:01:02 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
			i++;
		write(1, s, i);
		write(1, "\n", 1);
	}
}
