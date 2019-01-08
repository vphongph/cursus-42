/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfree_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 02:08:01 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/08 18:35:19 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1  à size_t n -> cpy \0 de str s'il existe (éviter overflow)
*/

void	*ft_memjoinfree_l(void *s1, void *s2, size_t l, size_t n)
{

	printf("s1 = %s\n", s1);
	printf("l = %lu\n", l);
	printf("s2 = %s\n", s2);
	printf("n =%lu\n", n);

	void *mem;

	if ((l && !s1)
		|| (n && !s2)
		|| !(mem = ft_memjoin(s1, s2, l, n)))
	{
		if (ft_putstr_fd_v2(RED"\amemJF_L ∅ pointer | malloc ∅\n"
			RESET, 2) == -1)
			write(2, RED"\amemJF_L -> ∅ pointer | malloc ∅ & putstr fd v2 ∅\n"
				RESET, 75);
		return (NULL);
	}
	free(s1);
	ft_putstr_v2(YELLOW"OYEEE"RESET);
	return (mem);
}
