/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_v8.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:34:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/15 03:00:47 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// static void	ft_zero512(void **s, void **e, size_t *n)
static void	ft_zero512(void **s, size_t *n)
{
	static t_64speed	speed64;
	static t_512speed	speed512;
	static t_4096speed	speed4096;

	while (*n / 4096)
	{
		**(t_4096speed **)s = speed4096;
		*s += 4096;
		*n -= 4096;
	}
	while (*n >> 9)
	{
		**(t_512speed **)s = speed512;
		*s += 512;
		*n -= 512;
	}
	while (*n >> 6)
	{
		**(t_64speed **)s = speed64;
		*s += 64;
		*n -= 64;
	}
}

void		ft_bzero(void *s, size_t n)
{
	// void *e;
	// e = s + (n - 1);
	// ft_zero512(&s, &e, &n);
	ft_zero512(&s, &n);
	while (n >> 3)
	{
		*(long long *)s = 0;
		s += 8;
		n -= 8;
	}
	while (n)
	{
		*(char *)s = 0;
		s++;
		n--;
	}
}
