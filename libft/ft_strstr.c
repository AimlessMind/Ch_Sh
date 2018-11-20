/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 18:08:26 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 01:46:47 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *bg, const char *sm)
{
	char	*next;
	char	*key;

	if (*bg == '\0' && *sm == '\0')
		return ((char*)bg);
	while (*bg)
	{
		next = (char*)bg;
		key = (char*)sm;
		while ((*bg) && (*key) && (*bg == *key))
		{
			bg++;
			key++;
		}
		if (*key == '\0')
			return (next);
		bg = next + 1;
	}
	return (0);
}
