/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:34:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/14 00:39:10 by vphongph         ###   ########.fr       */
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
	while (*n / sizeof(t_512speed))
	{
		**(t_512speed **)s = speed512;
		*s += sizeof(t_512speed);
		*n -= sizeof(t_512speed);
	}
	while (*n / sizeof(t_64speed))
	{
		**(t_64speed **)s = speed64;
		*s += sizeof(t_64speed);
		*n -= sizeof(t_64speed);
	}
}

void		ft_bzero(void *s, size_t n)
{
	ft_zero512(&s, &n);
	while (n / sizeof(long long))
	{
		*(long long *)s = 0;
		s += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n)
	{
		*(char *)s = 0;
		s++;
		n--;
	}
}
