/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:11:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 20:15:20 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	size_t	revnb;
	int		nzero;
	char	c;

	revnb = 0;
	nzero = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
		write(1, "-", 1);
	revnb = ft_revint(n, &nzero);
	while (revnb > 0)
	{
		c = (revnb % 10) + '0';
		write(1, &c, 1);
		revnb = revnb / 10;
	}
	printf("\n%d\n", nzero);
	while (nzero > 0)
	{
		write(1, "0", 1);
		nzero--;
	}
}
