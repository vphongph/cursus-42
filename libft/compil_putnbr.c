/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:54:45 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 20:12:56 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int n;

	n = 1030;

	printf("       nb = %d\n", n);
	fflush(stdout);

	printf("   bn rev = %lu\n", ft_revint(n, 0));
	fflush(stdout);

	write(1, "ft_putnbr = ", 12);
	ft_putnbr(n);

	return (0);
}