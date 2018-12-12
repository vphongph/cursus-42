/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfree_l_v1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 22:56:29 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/12 01:00:43 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memjoinfree_l(void *s1, void *s2, size_t l, size_t n)
{
	void *mem;
	void *tmp;
	void *tmp2;

	tmp2 = s1;
	if (!s1 || !s2 || !(mem = ft_memalloc(l + n)))
	{
		free(s1);
		return (NULL);
	}
	tmp = mem;
	while (l > 0)
	{
		*(char *)mem = *(char *)s1;
		mem++;
		s1++;
		l--;
	}
	while (n > 0)
	{
		*(char *)mem = *(char *)s2;
		mem++;
		s2++;
		n--;
	}
	free(tmp2);
	return (tmp);
}
