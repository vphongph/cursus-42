/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_random.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:35:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/18 22:18:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char 	*test_leaks(void)
{
	char *str;

	return (str = (char *)ft_memalloc(100));
}

int		main(void)
{
	int i = 10;

	// char *str1 = NULL;
	// char *str2 = NULL;
	// char *str1 = ALLIANCE"Vive l'Alliance !\n"RESET;
	// static char str2[100];

	// ft_memcpy_v2(str2, str1, 100);

	// ft_bzero_v2(str2, 100);

		while (i--)
			free (test_leaks());


	// printf("%d\n", ft_putstr_fd_v2(str1, 1));
	// printf("%d\n", ft_putstr_fd_v2(str2, 1));
	// printf("%d\n", ft_putstr_v2(str1));
	// printf("%d\n", ft_putstr_v2(str2));
	// printf("%d\n", ft_strlen_v2(str1));
	// printf("%lu\n", strlen(str1));
	// printf("%lu\n", strlen(str2));
	printf("END");

	while(1)
	{}

	return (0);
}