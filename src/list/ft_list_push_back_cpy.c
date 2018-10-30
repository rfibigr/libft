/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back_cpy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:17:15 by rfibigr           #+#    #+#             */
/*   Updated: 2018/10/30 15:55:38 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back_cpy(t_list **begin_list, void const *content,
		size_t content_size)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (tmp)
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_lstnewcpy(content, content_size);
}
