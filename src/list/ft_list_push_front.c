/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:37:31 by rfibigr           #+#    #+#             */
/*   Updated: 2018/10/30 15:56:21 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **begin, void const *content)
{
	t_list	*to_add;
	t_list	*tmp;

	tmp = *begin;
	to_add = ft_lstnew(content);
	if (*begin == NULL)
		*begin = to_add;
	else
	{
		to_add->next = *begin;
		*begin = to_add;
	}
}
