/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:33:11 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 01:25:34 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	while (n--)
	{
		p_dst[i] = p_src[i];
		if (p_src[i] == (unsigned char)c)
		{
			p_dst[i] = (unsigned char)c;
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
