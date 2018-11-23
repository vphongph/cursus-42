/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 02:44:40 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 02:51:42 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


void	ft_bzero(void *s, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (n / sizeof(long long) > 0)
	{
		*(long long *)s = 0;
		s += sizeof(long long);
		n -= sizeof(long long);
		printf("LONG LONG\n");
	}
	while (n / sizeof(int) > 0)
	{
		*(int *)s = 0;
		s += sizeof(int);
		n -= sizeof(int);
		printf("INT\n");
	}
	while (n / sizeof(short) > 0)
	{
		*(short *)s = 0;
		s += sizeof(short);
		n -= sizeof(short);
		printf("SHORT\n");
	}
	while (n > 0)
	{
		*(char *)s = 0;
		s++;
		n--;
		printf("CHAR\n");
	}
}
