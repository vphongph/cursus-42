/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/13 22:52:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ATTENTION size_t n
** bien renseigner type de var et + 1 si nécessaire
*/

static void	ft_cpy8(void **mem, void **s, size_t *n)
{
	while (*n / sizeof(long long) > 0)
	{
		**(long long **)mem = **(long long **)s;
		*s += sizeof(long long);
		*mem += sizeof(long long);
		*n -= sizeof(long long);
	}
	while (*n / sizeof(int) > 0)
	{
		**(int **)mem = **(int **)s;
		*s += sizeof(int);
		*mem += sizeof(int);
		*n -= sizeof(int);
	}
}

void		*ft_memdup(void *s, size_t n)
{
	void	*mem;
	void	*tmp;

	if (!s || !(mem = (void *)ft_memalloc(n)))
		return (NULL);
	tmp = mem;
	ft_cpy8(&mem, &s, &n);
	while (n / sizeof(int) > 0)
	{
		*(int *)mem = *(int *)s;
		s += sizeof(int);
		mem += sizeof(int);
		n -= sizeof(int);
	}
	if (n)
		*(char *)mem = *(char *)s;
	return (tmp);
}
