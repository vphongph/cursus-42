/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:21:37 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/18 19:53:36 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** ATTENTION size_t n
** Bien renseigner type de var (sizeof)
*/

void	*ft_memdup(void *s, size_t n)
{
	void *mem;

	if (!(s && (mem = malloc(n))))
	{
		// ft_putstr_fd(RED"\amemdup has NULL pointer or malloc failed\n"RESET, 2);
		return (NULL);
	}
	return (ft_memcpy_v2(mem, s, n));
}
