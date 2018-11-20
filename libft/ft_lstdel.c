/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:58:29 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/20 21:08:44 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *save;
	t_list *list;

	list = *alst;
	while (list)
	{
		save = list;
		del((save->content), save->content_size);
		free(save);
		list = list->next;
	}
	*alst = NULL;
}
