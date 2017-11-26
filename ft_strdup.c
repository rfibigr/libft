/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 11:39:09 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/25 16:03:01 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcp(char *copy, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
}

char		*ft_strdup(char *str)
{
	int		len;
	char	*strdup;

	len = ft_strlen(str);
	if (!(strdup = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcp(strdup, str);
	return (strdup);
}
