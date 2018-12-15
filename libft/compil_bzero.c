/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/15 03:03:23 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"


int		main(void)
{

	int	 tab[262144] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int	tab2[262144] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	tab[128] = 42;
	tab2[128] = 42;

	size_t i = 0;
	int	size = 1048576;

/*	int i = 0;
	printf("Address tab %p\n", tab);
	while (i < 20)
	{
		printf("Index:%d Address:%p\n", i, &((char*)tab)[i]);
		i++;
	}
	tab[i] = *(tab + i);
	printf("Address tab %p\n", tab);
*/
	while (i++ < 100000)
	{
		// bzero(tab, size);
		ft_bzero(tab2, size);
	}

	// i = 0;

	while (i < 129)
	{
		printf("tab[%lu] = %d || tab2[%lu] = %d\n", i, tab[i], i, tab2[i]);
		i++;
	}

	// fflush(stdout);

	// printf("\n%lu", sizeof(char));
	// printf("\n%lu", sizeof(short));
	// printf("\n%lu", sizeof(int));
	// printf("\n%lu", sizeof(long));
	// printf("\n%lu", sizeof(long long));
	// printf("\n%lu", sizeof(t_64speed));
	// printf("\n%lu", sizeof(t_512speed));

	return (0);
}