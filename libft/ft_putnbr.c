/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:11:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 21:52:50 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	size_t	revnb;
	char	c;

	revnb = 0;
	c = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
		write(1, "-", 1);
	revnb = ft_revint(n, &n);
	while (revnb > 0)
	{
		c = (revnb % 10) + '0';
		write(1, &c, 1);
		revnb = revnb / 10;
	}
	while (n > 0)
	{
		write(1, "0", 1);
		n--;
	}
}
