/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:48:59 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/19 17:17:01 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** ATTENTION size_t n
** Bien renseigner type de var (sizeof) et le nb (pas de bzero)
*/

void	*ft_memjoin(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	ft_putstr_v2("ici\n");

	if (!(s1 && s2 && (mem = malloc(l + n))))
	{
		ft_putstr_v2("là\n");

		if (ft_putstr_fd_v2(RED"\amemjoin ∅ pointer | malloc ∅\n"
			RESET, 2) == -1)
			write(2, RED"\amemjoin -> ∅ pointer | malloc ∅ & putstr fd v2 ∅\n"
				RESET, 75);
		return (NULL);
	}

	ft_putstr_v2("là aussi\n");

	ft_memcpy_v2(mem, s1, l);
	ft_memcpy_v2(&mem[l], s2, n);
	return (mem);
}
