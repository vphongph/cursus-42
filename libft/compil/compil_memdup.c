
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

	int	tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,42,15,16,17,18,19,20};
	// int	tab[2] = {1,2};
	int *tab2 = NULL;
	size_t len = 80;
	// size_t yop = 0;

	unsigned int i = 0;

	// while (yop < 10000)
	// {
		tab2 = ft_memdup(tab, len);
	// 	if (yop < 9999)
	// 		free (tab2);
	// 	yop++;
	// }

	i = 0;

	while (i < 20)
	{
		printf("tab[%d] = %d || tab2[%d] = %d\n", i, tab[i], i, tab2[i]);
		i++;
	}
	printf("\n");


	return (0);
}