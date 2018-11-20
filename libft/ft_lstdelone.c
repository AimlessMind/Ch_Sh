/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:52:26 by zbruce            #+#    #+#             */
/*   Updated: 2018/03/19 12:58:11 by zbruce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t))
{
	t_list *list;

	list = *lst;
	del((list->content), list->content_size);
	free(list);
	(*lst) = NULL;
}
