/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:01:25 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 22:10:55 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		while (i >= 0)
		{
			s[i] = '\0';
			i--;
		}
	}
}