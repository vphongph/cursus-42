/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_random.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:35:06 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/06 21:08:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void 	test_leaks(void)
{
	// char *str = NULL;
	ft_memalloc(0);
	// free(str);
}

int		main(void)
{
	// int i = 2;
	char *str;
	// // char *str1 = NULL;
	// char str1[26] = "Hello je suis un Pingouin";
	// char str1_1[41] = ALLIANCE"Vive l'Alliance !\n"RESET;
	// // char *str2 = NULL;
	// char str2[50] = " qui respire par le cul, je m'assieds, je meurs.\n";
	// // static char str2[100];
	// char *str3 = NULL;
	// char str4[26];
	// str4[25] = '!';

	// ft_memcpy_v2(str4, str1, ft_strlen_v2(str1) + 1);
	// printf("%s\n", str4);

	// ft_bzero_v2(str4, 1000000);

	test_leaks();

	// str3 = ft_memdup(str1_1,ft_strlen_v2(str1_1) + 1);
	// printf("%s\n", str3);
	// free(str3);


	// str3 = ft_memjoin(str1, str2, ft_strlen_v2(str1), ft_strlen_v2(str2));
	// printf("%s\n", str3);
	// free(str3);

	// ft_memalloc(1000);
	// ft_memalloc(1000);
	// ft_memalloc(1000);

	// while(i--)
		// ft_memalloc(0);

	// free(str3);

	// char *str5 = ft_memalloc(25 + 1);
	// while (str1[++i])
	// 	str5[i] = str1[i];
	// str5 = ft_memjoinfree_l(str5, str2, 25, 49 + 1);
	// printf("%s\n", str5);

	// free(str5);

	// str3 = ft_strsub_v2(str5, 6	, 66);

	// free(str5);
	// printf("%s\n", str3);
	// free(str3);


	// printf("%d\n", ft_putstr_fd_v2(str1, 1));
	// printf("%d\n", ft_putstr_fd_v2(str2, 1));
	// printf("%d\n", ft_putstr_v2(str1));
	// printf("%d\n", ft_putstr_v2(str2));
	// printf("%d\n", ft_strlen_v2(str1));
	// printf("%lu\n", strlen(str1));
	// printf("%lu\n", strlen("à"));
	// write(1,"END\n",4);
	str = malloc(0);

	sleep(3);

	return (0);
}