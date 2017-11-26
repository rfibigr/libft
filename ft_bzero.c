/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:41:53 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/07 17:12:53 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*schar;

	schar = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		schar[i] = 0;
		i++;
	}
}
