/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:26 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/24 00:25:34 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <malloc/malloc.h>
#include <stdio.h>

	int		main(void)
{
	size_t i = 4096 * 32 - 1;
	size_t j = 0;
	char *str = malloc(i);

	printf("i = %lu\n", i);


	if (i / 4096 >= 32)
	{
		j = (i % 4096 ? 1 : 0);
		printf("malloc good = 4096 * %lu = %lu\n",
			i / 4096 + j,
			4096 * (i / 4096 + j));
	}
	else if (i / 4096)
	{
		j = (i % 4096 % 512 ? 1 : 0);
		printf("malloc good = 4096 * %lu + 512 * %lu = %lu\n",
			i / 4096,
			i % 4096 / 512 + j,
			4096 * (i / 4096) + 512 * (i % 4096 / 512 + j));
	}
	else if (i / 16 >= 64)
	{
		j = (i % 512 ? 1 : 0);
		printf("malloc good = 512 * %lu = %lu\n",
			i / 512 + j,
			512 * (i / 512 + j));
	}
	else
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
