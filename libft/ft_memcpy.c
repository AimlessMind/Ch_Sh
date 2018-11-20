/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 22:42:19 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 01:35:43 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d2;
	char	*s2;

	d2 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	while (i < n)
	{
		*d2 = *s2;
		d2++;
		s2++;
		i++;
	}
	return (dst);
}
