/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 02:14:35 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 22:11:51 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ans;
	int		len;
	int		i;

	if (s != NULL)
	{
		len = ft_strlen(s);
		ans = (char*)malloc(sizeof(char) * (len + 1));
		if (ans != NULL)
		{
			i = 0;
			while (i < len)
			{
				ans[i] = (*f)(s[i]);
				i++;
			}
			ans[i] = '\0';
			return (ans);
		}
	}
	return (0);
}
