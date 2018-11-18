/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 23:54:41 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/18 03:35:35 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)src)[i] == (unsigned char)c)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
			return (dst + i);
		}
		else
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (NULL);
}
