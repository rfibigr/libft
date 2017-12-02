/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:24:22 by rfibigr           #+#    #+#             */
/*   Updated: 2017/12/02 11:24:24 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	tmp = *begin_list;
	while (tmp)
	{
		tmp = *begin_list;
		tmp = tmp->next;
		*begin_list = tmp;
		free(tmp);
	}
}
