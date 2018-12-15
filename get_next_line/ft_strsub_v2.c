/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 01:02:16 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/15 03:05:13 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)ft_memalloc(sizeof(*str) * (len + 1))))
		return (NULL);
	tmp = str;
	s = &s[start];
	while (len / sizeof(long long))
	{
		*(long long *)str = *(long long *)s;
		str += sizeof(long long);
		s += sizeof(long long);
		len -= sizeof(long long);
	}
	while (len / sizeof(int))
	{
		*(int *)str = *(int *)s;
		str += sizeof(int);
		s += sizeof(int);
		len -= sizeof(int);
	}
	while (len / sizeof(short))
	{
		*(short *)str = *(short *)s;
		str += sizeof(short);
		s += sizeof(short);
		len -= sizeof(short);
	}
	if (len)
		*str = *s;
	return (tmp);
}
