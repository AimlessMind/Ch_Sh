/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:48:23 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 01:42:01 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bg, const char *sm, size_t n)
{
	char	*b;

	b = ft_strstr(bg, sm);
	if ((b - bg) + ft_strlen(sm) > n)
		return (NULL);
	return (b);
}
