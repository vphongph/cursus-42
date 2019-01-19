/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:48:59 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 06:30:12 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1  à size_t n -> cpy \0 de str s'il existe (éviter overflow)
** Si len = 0, pointeur NULL ok
** Attention malloc 0 !
*/

void	*ft_memjoin(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if ((l && !s1) || (n && !s2) || !(l || n) || !(mem = malloc(l + n)))
	{
		ft_putstr_fd("\amemjoin ∅\n", 2);
		return (NULL);
	}
	ft_memcpy_v2(mem, s1, l);
	ft_memcpy_v2(&mem[l], s2, n);
	return (mem);
}
