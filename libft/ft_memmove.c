/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:13:10 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/19 23:31:08 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	if (p_dst == p_src)
		return (dst);
	if (p_dst > p_src)
	{
		p_dst = p_dst + len - 1;
		p_src = p_src + len - 1;
		while (len-- > 0)
			*(p_dst--) = *(p_src--);
		return (dst);
	}
	while (len-- > 0)
		*(p_dst++) = *(p_src++);
	return (dst);
}
