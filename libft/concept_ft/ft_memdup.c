/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 21:10:55 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

void	*ft_memdup(void *s, size_t n)
{
	void	*mem;
	void	*tmp;
	size_t	i;

	i = 0;
	if (!s || !(mem = ft_memalloc(n)))
		return (NULL);
	tmp = mem;
	// return(ft_memcpy(mem, s, n));
	while (n / sizeof(long long) > 0)
	{
		*(long long *)mem = *(long long *)s;
		s += sizeof(long long);
		mem += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n / sizeof(int) > 0)
	{
		*(int *)mem = *(int *)s;
		s += sizeof(int);
		mem += sizeof(int);
		n -= sizeof(int);
	}
	while (n / sizeof(short) > 0)
	{
		*(short *)mem = *(short *)s;
		s += sizeof(short);
		mem += sizeof(short);
		n -= sizeof(short);
	}
	while (n > 0)
	{
		*(char *)mem = *(char *)s;
		mem++;
		s++;
		n--;
	}
	return (tmp);
}
