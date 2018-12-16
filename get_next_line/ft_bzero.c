/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:34:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/16 03:35:39 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_zero512(void **s, size_t *n)
{
	static t_64speed	speed64;
	static t_512speed	speed512;

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
	if (!s)
	{
		ft_putstr_fd(RED"\amemcpy has NULL pointer\n"RESET, 2);
		return ;
	}
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
