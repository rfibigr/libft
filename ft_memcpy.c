/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:19:16 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/07 18:35:48 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*dstchar;
	unsigned char	*srcchar;

	dstchar = (unsigned char *)dst;
	srcchar = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstchar[i] = srcchar[i];
		i++;
	}
	return (dstchar);
}
