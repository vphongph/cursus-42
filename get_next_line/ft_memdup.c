/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/14 21:30:25 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ATTENTION size_t n
** Bien renseigner type de var et + 1 si nécessaire (ex: type char)
** À mettre à 0 à l sortie de la fonction
*/

static void	ft_cpy8(void **mem, void **s, size_t *n)
{
	while (*n / sizeof(long long))
	{
		**(long long **)mem = **(long long **)s;
		*s += sizeof(long long);
		*mem += sizeof(long long);
		*n -= sizeof(long long);
	}
	while (*n / sizeof(int))
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

	if (!s || !(mem = (void *)ft_memalloc(n + 1)))
		return (NULL);
	tmp = mem;
	ft_cpy8(&mem, &s, &n);
	while (n / sizeof(short))
	{
		*(short *)mem = *(short *)s;
		s += sizeof(short);
		mem += sizeof(short);
		n -= sizeof(short);
	}
	if (n)
		*(char *)mem = *(char *)s;
	return (tmp);
}
