/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:12:33 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 11:14:23 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t tmp1;
	size_t tmp2;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	tmp1 = i;
	tmp2 = j;
	if (size <= j)
		return (i + size);
	i = 0;
	size -= (j + 1);
	while (size > 0 && src[i])
	{
		dst[j++] = src[i++];
		size--;
	}
	dst[j] = '\0';
	while (size > 0)
	{
		dst++;
		size--;
	}
	return (tmp1 + tmp2);
}
