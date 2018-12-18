/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:48:59 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/18 19:53:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memjoin(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if (!(s1 && s2 && (mem = malloc(l + n))))
	{
		// ft_putstr_fd(RED"\amemjoin NULL pointer or malloc failed\n"RESET, 2);
		return (NULL);
	}
	ft_memcpy_v2(mem, s1, l);
	ft_memcpy_v2(&mem[l], s2, n);
	return (mem);
}
