/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV2_1_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:15:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/17 02:40:12 by vphongph         ###   ########.fr       */
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
			((long long *)s)[i] = 0;
			i++;
		}
		else if (n >= sizeof(int))
		{
			((int *)s)[i] = 0;
			i++;
		}
		else if (n >= sizeof(short))
		{
			((short *)s)[i] = 0;
			i++;
		}
		else
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}