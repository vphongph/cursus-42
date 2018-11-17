/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV2_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:15:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/17 21:55:37 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		if (n >= sizeof(long long))
		{
			((long long *)s)[i] = 0;
			i += sizeof(long long);
			n -= sizeof(long long);
		}
		else if (n >= sizeof(int))
		{
			((int *)s)[i] = 0;
			i += sizeof(int);
			n -= sizeof(int);
		}
		else if (n >= sizeof(short))
		{
			((short *)s)[i] = 0;
			i += sizeof(short);
			n -= sizeof(short);
		}
		else
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}