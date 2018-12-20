/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:48:59 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/20 01:20:32 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1  à size_t n -> cpy \0 de str s'il existe (éviter overflow)
*/

void	*ft_memjoin(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if (!(s1 && s2 && (mem = malloc(l + n))))
	{
		if (ft_putstr_fd_v2(RED"\amemjoin ∅ pointer | malloc ∅\n"
			RESET, 2) == -1)
			write(2, RED"\amemjoin -> ∅ pointer | malloc ∅ & putstr fd v2 ∅\n"
				RESET, 75);
		return (NULL);
	}
	ft_memcpy_v2(mem, s1, l);
	ft_memcpy_v2(&mem[l], s2, n);
	return (mem);
}
