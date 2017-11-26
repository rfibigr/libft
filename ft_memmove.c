/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:33:17 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/25 10:01:55 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstchar;
	unsigned char	*srcchar;
	size_t			i;

	i = 0;
	dstchar = (unsigned char *)dst;
	srcchar = (unsigned char *)src;
	if (srcchar == dstchar)
		return (dstchar);
	if (srcchar < dstchar)
		while ((int)len > 0)
		{
			dstchar[len - 1] = srcchar[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			dstchar[i] = srcchar[i];
			i++;
		}
	return (dstchar);
}
