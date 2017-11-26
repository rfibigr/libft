/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:19:25 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/07 16:36:00 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bchar;

	bchar = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bchar[i] = c;
		i++;
	}
	return (bchar);
}
