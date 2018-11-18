/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 19:01:19 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/18 19:34:19 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
		size_t i;

	i = 0;
	while (len > 0)
	{
		((char *)dst)[len - 1] = ((const char *)src)[i];
		i++;
		len--;
	}
	return (dst);
}