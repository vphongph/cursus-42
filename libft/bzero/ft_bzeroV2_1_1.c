/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzeroV2_1_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:15:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/18 18:51:43 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		if (n >= 8)
		{
			write(1, "caca1", 5);
			((long long *)s)[i] = 0;
			i++;
			n -= 8;
		}
		else if (n >= 4)
		{
			write(1, "caca2", 5);
			((int *)s)[i] = 0;
			i++;
			n -= 4;
		}
		else if (n >= 2)
		{
			write(1, "caca3", 5);
			((short *)s)[i] = 0;
			i++;
			n -= 2;
		}
		else
		{
			write(1, "caca4", 5);
			((char *)s)[i] = '\0';
			n -= 1;
		}
	}
}
