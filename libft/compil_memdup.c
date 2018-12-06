/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:53:09 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 22:08:15 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int		main(void)

{

	int	tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int *tab2 = NULL;
	size_t len = 44;
	size_t yop = 0;

	unsigned int i = 0;

	while (i < len / sizeof(int))
	{
		printf("[%d]=%d ", i, tab[i]);
		i++;
	}
	printf("\n");

	while (yop < 10000000)
	{
		tab2 = ft_memdup(tab, len);
		if (yop < 9999999)
			free (tab2);
		yop++;
	}

	i = 0;

	while (i < len / sizeof(int))
	{
		printf("[%d]=%d ", i, tab2[i]);
		i++;
	}
	printf("\n");
return (0);
}