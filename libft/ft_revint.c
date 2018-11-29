/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:34:52 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 20:17:33 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_revint(int n, int *nzero)
{
	size_t			rev;
	unsigned int	nb;

	nb = 0;
	rev = 0;
	if (n < 0)
		nb = (unsigned int)-n;
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		if ((nb % 10) == 0)
		{
			printf("ICI\n");
			(*nzero)++;
		}
		rev = rev * 10 + nb % 10;
		nb = nb / 10;
	}
	return (rev);
}
