
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:53:09 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/07 20:05:23 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "concept.h"

/*
	while (n / sizeof(t_bufspeed) > 0)
	{
		*(t_bufspeed *)mem = *(t_bufspeed *)s;
		s += sizeof(t_bufspeed);
		mem += sizeof(t_bufspeed);
		n -= sizeof(t_bufspeed);
	}
*/

int		main(void)

{

	int	tab[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int *tab2 = NULL;
	size_t len = 1048576;
	size_t yop = 0;

	// unsigned int i = 0;

	// while (i < len / sizeof(int))
	// {
	// 	printf("[%d]=%d ", i, tab[i]);
	// 	i++;
	// }
	// printf("\n");

	while (yop < 10000)
	{
		tab2 = ft_memdup(tab, len);
		if (yop < 9999)
			free (tab2);
		yop++;
	}

	// i = 0;

	// while (i < len / sizeof(int))
	// {
	// 	printf("[%d]=%d ", i, tab2[i]);
	// 	i++;
	// }
	// printf("\n");

	printf("tab  : %lu\n", sizeof(tab));
	printf("mega : %lu\n", sizeof(t_megaspeed));

	return (0);
}