/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:54:45 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 21:50:36 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int n;
	int n2;

	n = -2147483648;
	n2 = n;


	printf("       nb = %d\n", n);
	fflush(stdout);

	printf("    revnb = %lu\n", ft_revint(n, &n2));
	fflush(stdout);

	write(1, "ft_putnbr = ", 12);
	ft_putnbr(n);

	write(1, "\n", 1);

	return (0);
}