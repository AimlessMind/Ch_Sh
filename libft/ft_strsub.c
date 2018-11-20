/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 03:49:22 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/19 23:37:07 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;

	if (s != NULL)
	{
		ans = (char*)malloc(sizeof(char) * (len + 1));
		if (ans != NULL)
		{
			i = 0;
			while (i < len)
			{
				ans[i] = s[start];
				start++;
				i++;
			}
			ans[i] = '\0';
			return (ans);
		}
	}
	return (0);
}
