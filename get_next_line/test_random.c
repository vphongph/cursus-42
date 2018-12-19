/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_random.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:35:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/19 19:07:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void 	test_leaks(void)
{
	char *str = NULL;
	str = ft_memalloc(10);
	free(str);
}

int		main(void)
{
	// char *str;
	// char *str1 = NULL;
	// char *str1 = "Hello je suis un Pingouin";
	char *str1 = ALLIANCE"Vive l'Alliance !\n"RESET;
	// char *str2 = NULL;
	char *str2 = " qui respire par le cul, je m'assieds, je meurs.";
	// static char str2[100];
	// char *str3 = NULL;

	// ft_memcpy_v2(str2, str1, 100);

	// ft_bzero_v2(str2, 100);

	test_leaks();

	str2 = ft_memdup(str1, 3);
	// printf("%s\n", str2);
	free(str2);

	// str3 = ft_memjoin(str1, str2, 10000, 10000);
	// printf("%s\n", str3);
	// free(str3);

	// str3 = (ft_memalloc(1000000000000000000));
	// free(str3);

	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);


	// printf("%d\n", ft_putstr_fd_v2(str1, 1));
	// printf("%d\n", ft_putstr_fd_v2(str2, 1));
	// printf("%d\n", ft_putstr_v2(str1));
	// printf("%d\n", ft_putstr_v2(str2));
	// printf("%d\n", ft_strlen_v2(str1));
	// printf("%lu\n", strlen(str1));
	// printf("%lu\n", strlen("à"));
	write(1,"END\n",4);
	// str = malloc(0);


	sleep(1);

	return (0);
}