/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:26:08 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 06:30:00 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** ATTENTION size_t n
** Penser au type de var (sizeof)
** Et + 1 -> \0 de str (éviter overflow)
*/

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (!(mem = malloc(size)))
	{
		ft_putstr_fd("\amemalloc -> malloc ∅\n", 2);
		return (NULL);
	}
	ft_bzero_v2(mem, size);
	return (mem);
}
