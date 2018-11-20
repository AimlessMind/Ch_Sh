/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 03:16:00 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 22:14:02 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;
	unsigned int	len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		ans = (char*)malloc(sizeof(char) * (len + 1));
		if (ans != NULL)
		{
			i = 0;
			while (i < len)
			{
				ans[i] = (*f)(i, s[i]);
				i++;
			}
			ans[i] = '\0';
			return (ans);
		}
	}
	return (0);
}
