/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:17:15 by rfibigr           #+#    #+#             */
/*   Updated: 2018/10/30 16:07:19 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin, void const *content)
{
	t_list	*to_add;
	t_list	*tmp;

	tmp = *begin;
	to_add = ft_lstnew(content);
	if (*begin == NULL)
		*begin = to_add;
	else
	{
		if (tmp)
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lstnew(content);
	}
}
