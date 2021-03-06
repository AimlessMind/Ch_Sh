/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 19:21:01 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 21:25:39 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		save;
	char	*s1;

	s1 = (char*)s;
	i = 0;
	save = -1;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			save = i;
		i++;
	}
	if (save != -1)
		return (&s1[save]);
	if (c == '\0')
		return (&s1[i]);
	return (NULL);
}
