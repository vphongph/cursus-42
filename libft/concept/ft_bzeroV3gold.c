/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV3gold.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 02:44:40 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 16:13:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	while (n / sizeof(long long) > 0)
	{
		*(long long *)s = 0;
		s += sizeof(long long);
		n -= sizeof(long long);
	}
	while (n / sizeof(int) > 0)
	{
		*(int *)s = 0;
		s += sizeof(int);
		n -= sizeof(int);
	}
	while (n / sizeof(short) > 0)
	{
		*(short *)s = 0;
		s += sizeof(short);
		n -= sizeof(short);
	}
	while (n > 0)
	{
		*(char *)s = 0;
		s++;
		n--;
	}
}
