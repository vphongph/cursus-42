/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV2_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:15:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/19 18:36:15 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (n >= sizeof(long long))
		{
			((long long *)s)[i / sizeof(long long)] = 0;
			i += sizeof(long long);
		}
		else if (n >= sizeof(int))
		{
			((int *)s)[i / sizeof(int)] = 0;
			i += sizeof(int);
		}
		else if (n >= sizeof(short))
		{
			((short *)s)[i / sizeof(short)] = 0;
			i += sizeof(short);
		}
		else
		{
			((char *)s)[i / sizeof(char)] = 0;
			i++;
		}
	}
}