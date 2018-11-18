/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/18 02:39:01 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"



int		main(void)
{

	int	tabsrc[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int	tabdest[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

	int	tabsrc2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int	tabdest2[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

	int i;
	size_t n = 80;
	int c = 1;

	i = 0;
	while (i < 20)
	{
		printf("%d", tabsrc[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nSRC\n", 5);

	i = 0;
	while (i < 20)
	{
		printf("%d", tabsrc2[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nSRC2\n", 6);

	i = 0;
	while (i < 20)
	{
		printf("%d", tabdest[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nDEST\n", 6);

	i = 0;
		while (i < 20)
	{
		printf("%d", tabdest2[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nDEST2\n", 7);

	memccpy(tabdest, tabsrc, c, n);
	ft_memccpy(tabdest2, tabsrc2, c, n);


	i = 0;
	while (i < 20)
	{
		printf("%d", tabdest[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nDEST\n", 6);

	i = 0;
		while (i < 20)
	{
		printf("%d", tabdest2[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	fflush(stdout);
	write(1, "\nDEST2\n", 7);

	return (0);
}
