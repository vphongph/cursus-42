/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV2_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:15:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/17 23:27:57 by vphongph         ###   ########.fr       */
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
			*(long long *)s = 0;
			s++;
			i += 8;
		}
		else if (n >= sizeof(int))
		{
			*(int *)s = 0;
			s++;
			i += 4;
		}
		else if (n >= sizeof(short))
		{
			*(short *)s = 0;
			s++;
			i += 2;
		}
		else
		{
			*(char *)s = '\0';
			s++;
			i += 1;
		}
	}
}