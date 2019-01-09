/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfree_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 03:18:01 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/09 19:44:02 by vphongph         ###   ########.fr       */
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

void	*ft_memjoinfree_b(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if ((l && !s1) || (n && !s2) || !(l || n)
		|| !(mem = ft_memjoin(s1, s2, l, n)))
	{
		if (ft_putstr_fd_v2(RED"\amemjoinfree_B ∅\n"
			RESET, 2) == -1)
			write(2, RED"\amemjoinfree_B ∅ & putstr fd v2 ∅\n"
				RESET, 57);
		return (NULL);
	}
	free(s1);
	free(s2);
	return (mem);
}
