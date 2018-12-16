/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfree_r.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 03:16:09 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/16 03:19:14 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memjoinfree_r(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;

	if (!(s1 && s2 && (mem = ft_memjoin(s1, s2, l, n))))
	{
		ft_putstr_fd(RED"\amemJF_R NULL pointer or malloc failed\n"RESET, 2);
		return (NULL);
	}
	free(s2);
	return (mem);
}
