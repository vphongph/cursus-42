/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:34:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/14 01:55:53 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_zero512(void **s, size_t *n)
{
	int			i;
	t_64speed	speed64;
	t_512speed	speed512;

	i = 0;
	while (i < 8)
		((long long *)speed64.ram)[i++] = 0;
	i = 0;
	while (i < 8)
		((t_64speed *)speed512.ram)[i++] = speed64;
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
