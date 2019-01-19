/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 01:49:59 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 17:51:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy8(void **dst, void **src, size_t *n)
{
	while (*n / sizeof(long long))
	{
		**(long long **)dst = **(long long **)src;
		*src += sizeof(long long);
		*dst += sizeof(long long);
		*n -= sizeof(long long);
	}
	while (*n / sizeof(int))
	{
		**(int **)dst = **(int **)src;
		*src += sizeof(int);
		*dst += sizeof(int);
		*n -= sizeof(int);
	}
}

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1 -> cpy \0 de str s'il existe (éviter overflow)
** Si len = 0, src NULL ok
*/

void		*ft_memcpy_v2(void *dst, void *src, size_t n)
{
	void	*tmp;

	if (!dst || (n && !src))
		return (NULL);
	tmp = dst;
	ft_cpy8(&dst, &src, &n);
	while (n / sizeof(short))
	{
		*(short *)dst = *(short *)src;
		src += sizeof(short);
		dst += sizeof(short);
		n -= sizeof(short);
	}
	if (n)
		*(char *)dst = *(char *)src;
	return (tmp);
}
