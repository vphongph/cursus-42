/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdupv2test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:54:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/13 22:34:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ATTENTION size_t n
** bien renseigner type de var et + 1 si nécessaire
*/

static void	ft_cpy512(void **mem, void **s, size_t *n)
{
	while (*n / sizeof(t_512speed) > 0)
	{
		**(t_512speed **)mem = **(t_512speed **)s;
		*s += sizeof(t_512speed);
		*mem += sizeof(t_512speed);
		*n -= sizeof(t_512speed);
	}
	while (*n / sizeof(t_64speed) > 0)
	{
		**(t_64speed **)mem = **(t_64speed **)s;
		*s += sizeof(t_64speed);
		*mem += sizeof(t_64speed);
		*n -= sizeof(t_64speed);
	}
}

void		*ft_memdup(void *s, size_t n)
{
	void	*mem;
	void	*tmp;

	if (!s || !(mem = (void *)ft_memalloc(n)))
		return (NULL);
	tmp = mem;
	ft_cpy512(&mem, &s, &n);
	while (n / sizeof(long long) > 0)
	{
		*(long long *)mem = *(long long *)s;
		s += sizeof(long long);
		mem += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n)
	{
		*(char *)mem = *(char *)s;
		s++;
		mem++;
		n--;
	}
	return (tmp);
}
