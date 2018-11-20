/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 13:56:34 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/21 16:05:23 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		len;

	len = ft_strlen(str1);
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	len = 0;
	if (str2 == NULL)
		return (NULL);
	while (str1[len] != '\0')
	{
		str2[len] = str1[len];
		len++;
	}
	str2[len] = '\0';
	return (str2);
}
