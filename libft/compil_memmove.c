/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:53:09 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/19 21:35:55 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>	

int		main(void)

{
	
	int	tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	// int	tab2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	int i = 0;

	while (i < 20)
	{
		printf("[%d]=%d ", i, tab[i]);
		i++;
	}
	printf("\n");

	size_t len = 12;
	// memmove(tab + 1, tab, len);
	ft_memmove(tab + 1, tab, len);

	i = 0;

	while (i < 20)
	{
		printf("[%d]=%d ", i, tab[i]);
		i++;
	}
	printf("\n");
return (0);
}