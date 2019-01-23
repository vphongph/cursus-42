/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:26 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/23 20:47:29 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <malloc/malloc.h>
#include <stdio.h>

int		main(void)
{
	size_t i = ((4096 * 2) + (512 * 3) + (17 * 16));
	char *str = malloc(i);

	printf("%lu\n", i);
	printf("%lu\n", malloc_size(str));
	printf("%lu\n", malloc_good_size(i));

	return (0);
}