/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 23:01:58 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/19 23:47:48 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>	

int		main(void)

{
	
	int	tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int	tab2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	// int i = 0;
	size_t n = 40;

	// while (i < 20)
	// {
	// 	printf("[%d]=%d ", i, tab[i]);
	// 	i++;
	// }
	printf("\n");

	printf("memcmp = %d",memcmp(tab, tab2, n));

	printf("\n");

	printf("memcmp = %d",ft_memcmp(tab, tab2, n));
return (0);
}