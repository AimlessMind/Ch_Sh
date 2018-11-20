/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 03:57:43 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/19 15:04:42 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ans;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	if ((s1 != NULL) && (s2 != NULL))
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		ans = (char*)malloc(sizeof(char) * (len + 1));
		if (ans != NULL)
		{
			i = ft_strlen(s1);
			j = 0;
			ans = ft_strcpy(ans, s1);
			while (i < len)
			{
				ans[i] = s2[j];
				i++;
				j++;
			}
			ans[i] = '\0';
			return (ans);
		}
	}
	return (0);
}
