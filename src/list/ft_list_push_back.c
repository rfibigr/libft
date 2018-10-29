/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:17:15 by rfibigr           #+#    #+#             */
/*   Updated: 2018/10/23 18:14:17 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void const *content,
		size_t content_size)
{
	t_list	*tmp;

	tmp = *begin_list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_lstnew(content, content_size);
}
