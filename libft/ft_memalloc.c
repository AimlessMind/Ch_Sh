/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:49:09 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/21 15:49:04 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;
	size_t	i;

	if (size > 0)
	{
		i = 0;
		fresh = (char*)malloc(sizeof(char) * size);
		if (fresh != NULL)
		{
			while (size > 0)
			{
				fresh[i] = 0;
				size--;
				i++;
			}
			return (fresh);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
