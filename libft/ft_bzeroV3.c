/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 02:44:40 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/17 02:45:01 by vphongph         ###   ########.fr       */
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
			i++;
		}
		else if (n >= sizeof(int))
		{
			*(int *)s = 0;
			s++;
			i++;
		}
		else if (n >= sizeof(short))
		{
			*(short *)s = 0;
			s++;
			i++;
		}
		else
		{
			*(char *)s = '\0';
			s++;
			i++;
		}
	}
}