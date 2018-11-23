/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:05:23 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 02:34:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	void	*dest;

	dest = s + n;
	if (dest > s)
	{
		while (s < dest)
		{
			if ((unsigned long)(dest - s) >= sizeof(long long))
			{
				printf("LONG LONG\n");
				*(long long *)s = 0;
				s += sizeof(long long);
			}
			else if ((unsigned long)(dest - s) >= sizeof(int))
			{
				printf("INT\n");
				*(int *)s = 0;
				s += sizeof(int);
			}
			else if ((unsigned long)(dest - s) >= sizeof(short))
			{
				printf("SHORT\n");
				*(short *)s = 0;
				s += sizeof(short);
			}
			else if ((unsigned long)(dest - s) >= sizeof(char))
			{
				printf("CHAR\n");
				*(char *)s = 0;
				s += sizeof(char);
			}
		}
	}
}