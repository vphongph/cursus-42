/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:26 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/24 15:58:42 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <malloc/malloc.h>
#include <stdio.h>

int		main(void)
{
	size_t i = 10000; /*var à changer pour test*/

	size_t j = 0;

	char *str = malloc(i);

	printf("i = %lu\n", i);

	if (i / 4096 >= 32) /*Dès qu'on atteint 131072, malloc de 4096 en 4096*/
	{
		j = (i % 4096 ? 1 : 0);
		printf("malloc good = 4096 * %lu = %lu\n",
			i / 4096 + j,
			4096 * (i / 4096 + j));
	}
	else if (i / 16 >= 64) /*Dès qu'on atteint 1024, malloc de 512 en 512*/
	{
		j = (i % 512 ? 1 : 0);
		printf("malloc good = 512 * %lu = %lu\n",
			i / 512 + j,
			512 * (i / 512 + j));
	}
	else /*malloc de 16 en 16*/
	{
		j = (i % 16 ? 1 : 0);
		i == 0 ? j = 1 : j;
		printf("malloc good = 16 * %lu = %lu\n",
			i / 16 + j,
			16 * (i / 16 + j));
	}

	printf("malloc = %lu\n", malloc_size(str));

	return (0);
}
