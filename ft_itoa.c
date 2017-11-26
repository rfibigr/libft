/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:39:32 by rfibigr           #+#    #+#             */
/*   Updated: 2017/11/25 16:39:41 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_n(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_reverse(char *s)
{
	char	tmp;
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i++;
		j--;
	}
	return (s);
}

static char	*zero(void)
{
	char *s;

	s = ft_strnew(1);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	long	nl;
	int		neg;

	nl = n;
	neg = 0;
	if (nl == 0)
		return (zero());
	if (nl < 0)
	{
		neg = 1;
		nl = -nl;
	}
	if (!(s = ft_strnew(long_n(nl) + neg)))
		return (NULL);
	i = 0;
	while (nl != 0)
	{
		s[i++] = nl % 10 + '0';
		nl = nl / 10;
	}
	if (neg == 1)
		s[i] = '-';
	return (ft_reverse(s));
}
