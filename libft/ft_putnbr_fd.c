/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 22:44:23 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 22:47:10 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	size_t	revnb;
	char	c;

	revnb = 0;
	c = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
		write(fd, "-", 1);
	revnb = ft_revint(n, &n);
	while (revnb > 0)
	{
		c = (revnb % 10) + '0';
		write(fd, &c, 1);
		revnb = revnb / 10;
	}
	while (n > 0)
	{
		write(fd, "0", 1);
		n--;
	}
}
