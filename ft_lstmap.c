/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:00:04 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/25 19:00:21 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *cp;
	t_list *start;
	t_list *tmp;

	if (!lst)
		return (NULL);
	start = ft_lstnew(lst->content, lst->content_size);
	start = f(lst);
	cp = start;
	while (lst->next)
	{
		lst = lst->next;
		tmp = ft_lstnew(lst->content, lst->content_size);
		tmp = f(lst);
		cp->next = tmp;
		cp = cp->next;
	}
	return (start);
}
