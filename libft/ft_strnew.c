/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 20:38:49 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 21:55:09 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!(fresh = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (i < size + 1)
		fresh[i++] = '\0';
	return (fresh);
}
