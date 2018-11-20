/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 05:32:29 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/22 13:45:31 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrd_incra(char const *s, char c)
{
	int i;
	int wrd;

	wrd = 1;
	i = 0;
	if (s[i] != c)
		wrd++;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				wrd++;
		}
		i++;
	}
	return (wrd);
}

static int	ft_charlen(char const *s, char c, int i)
{
	char	*p1;
	int		len;

	len = 0;
	p1 = (char*)s;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_returni(char const *s, char c, int i)
{
	char *p1;

	p1 = (char*)s;
	while (s[i] != c && s[i])
		i++;
	while (s[i] == c)
		i++;
	return (i);
}

static char	*ft_new_set(size_t size)
{
	char *new;

	if (size > 0)
	{
		if (!((new) = (char*)malloc(sizeof(char) * size + 1)))
			return (NULL);
		ft_memset(new, '\0', size + 1);
		return (new);
	}
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**new_array;
	int				word;
	int				len;
	unsigned int	i;
	int				j;

	if (s == NULL)
		return (NULL);
	word = ft_wrd_incra(s, c);
	j = 0;
	i = 0;
	if ((new_array = (char**)malloc(sizeof(char*) * word)) == NULL)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (word-- > 0)
	{
		len = 0;
		len = ft_charlen(s, c, i);
		new_array[j] = ft_new_set(len);
		new_array[j] = ft_strncpy(new_array[j], &s[i], len);
		i = ft_returni(s, c, i);
		j++;
	}
	return (new_array);
}
