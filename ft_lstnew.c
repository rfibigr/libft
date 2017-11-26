/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:47:50 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/25 17:59:59 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_elem;

	if (!(new_elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
	}
	else
	{
		if (!(new_elem->content = (void *)malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(new_elem->content, content, content_size);
		new_elem->content_size = content_size;
	}
	new_elem->next = NULL;
	return (new_elem);
}
