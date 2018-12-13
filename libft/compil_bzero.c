/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/13 01:33:49 by vphongph         ###   ########.fr       */
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
	int	size = 1048576;
	bzero(tab, size);
	// ft_bzero(tab2, size);

	int i = 0;

	while (i < 20)
	{
		printf("tab[%d] = %d || tab2[%d] = %d\n", i, tab[i], i, tab2[i]);
		i++;
	}

	// fflush(stdout);

	// printf("\n%lu", sizeof(char));
	// printf("\n%lu", sizeof(short));
	// printf("\n%lu", sizeof(int));
	// printf("\n%lu", sizeof(long));
	// printf("\n%lu", sizeof(long long));

	return (0);
}