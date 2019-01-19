/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 04:45:20 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1 -> cpy \0 de str s'il existe (éviter overflow)
*/

void	*ft_memdup(void *s, size_t n)
{
	void *mem;

	if (!(s && (mem = malloc(n))))
	{
		if (ft_putstr_fd_v2(RED"\amemdup -> ∅ pointer | malloc ∅\n"
			RESET, 2) == -1)
			write(2, RED"\amemdup -> ∅ pointer | malloc ∅ & putstr fd v2 ∅\n"
				RESET, 74);
		return (NULL);
	}
	return (ft_memcpy_v2(mem, s, n));
}
