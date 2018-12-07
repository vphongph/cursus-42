/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/07 20:25:57 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "concept.h"


/*
** ATTENTION size_t n
** bien renseigner type de var et + 1 si nécessaire
*/

void	*ft_memdup(void *s, size_t n)
{
	void	*mem;
	void	*tmp;

	if (!s || !(mem = (void *)ft_memalloc(n)))
		return (NULL);
	tmp = mem;
	// while (n / sizeof(t_megaspeed) > 0)
	// {
	// 	*(t_megaspeed *)mem = *(t_megaspeed *)s;
	// 	s += sizeof(t_megaspeed);
	// 	mem += sizeof(t_megaspeed);
	// 	n -= sizeof(t_megaspeed);
	// }
	while (n / sizeof(long long) > 0)
	{
		*(long long *)mem = *(long long *)s;
		s += sizeof(long long);
		mem += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n / sizeof(int) > 0
		&& (*(int *)mem = *(int *)s) == *(int *)mem
		&& (mem += sizeof(int)) && (s += sizeof(int)))
		n -= sizeof(int);
	while (n / sizeof(short) > 0
		&& (*(short *)mem = *(short *)s) == *(short *)mem
		&& (mem += sizeof(short)) && (s += sizeof(short)))
		n -= sizeof(short);
	if (n)
		*(char *)mem = *(char *)s;
	return (tmp);
}
