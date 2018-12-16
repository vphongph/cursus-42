/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfree_l_v2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 22:56:29 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/16 02:09:09 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*ft_cpys1(void *mem, void *s1, size_t l)
{
	while (l / sizeof(long long))
	{
		*(long long *)mem = *(long long *)s1;
		s1 += sizeof(long long);
		mem += sizeof(long long);
		l -= sizeof(long long);
	}
	while (l / sizeof(int))
	{
		*(int *)mem = *(int *)s1;
		s1 += sizeof(int);
		mem += sizeof(int);
		l -= sizeof(int);
	}
	while (l / sizeof(short))
	{
		*(short *)mem = *(short *)s1;
		s1 += sizeof(short);
		mem += sizeof(short);
		l -= sizeof(short);
	}
	if (l)
		*(char *)mem++ = *(char *)s1;
	return (mem);
}

static void	ft_cpys2(void *mem, void *s2, size_t n)
{
	while (n / sizeof(long long))
	{
		*(long long *)mem = *(long long *)s2;
		s2 += sizeof(long long);
		mem += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n / sizeof(int))
	{
		*(int *)mem = *(int *)s2;
		s2 += sizeof(int);
		mem += sizeof(int);
		n -= sizeof(int);
	}
	while (n / sizeof(short))
	{
		*(short *)mem = *(short *)s2;
		s2 += sizeof(short);
		mem += sizeof(short);
		n -= sizeof(short);
	}
	if (n)
		*(char *)mem = *(char *)s2;
}

void		*ft_memjoinfree_l(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if (!s1 || !s2 || !(mem = ft_memalloc(l + n)))
	{
		free(s1);
		return (NULL);
	}
	ft_cpys2(ft_cpys1(mem, s1, l), s2, n);
	free(s1);
	return (mem);
}
