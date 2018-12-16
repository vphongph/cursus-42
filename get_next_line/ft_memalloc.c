/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:26:08 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/15 23:49:36 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (!(mem = malloc(size)))
	{
		ft_putstr_fd(RED"\amemalloc malloc failed\n"RESET, 2);
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}
