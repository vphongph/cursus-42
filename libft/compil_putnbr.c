/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:54:45 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 18:37:00 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int n;

	n = 1;

	printf("%d\n", n);
	fflush(stdout);

	printf("%lu\n", ft_revint(n));
	fflush(stdout);

	ft_putnbr(n);

	return (0);
}