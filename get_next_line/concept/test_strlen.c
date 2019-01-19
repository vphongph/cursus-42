/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 02:07:42 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/15 15:52:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen_1(char *s);

int		main(void)
{
	// char *str = NULL;
	char str[301] = "2345678wro;iewroiew*&^&^%&*^$%&67+)_080w7ekljhvkfjhlivudfhsl35fg43654vboh^&%^%$&^$fgjhgweury123456782345678wro;iewroiew*&^&^%&*^$%&67+)_080w7ekljhvkfjhlivudfhsl35fg43654vboh^&%^%$&^$fgjhgweury123456782345678wro;iewroiew*&^&^%&*^$%&67+)_080w7ekljhvkfjhlivudfhsl35fg43654vboh^&%^%$&^$fgjhgweury12345678";
	// char str[7] = {-128, -127, -1, -10, 5, 1, 0};

	int i = 10000000;

	while (i--)
	{
		ft_strlen_v2(str);
	}

	printf("      str = %s\n", str);
	printf("   strlen = %lu\n", strlen(str));
	// printf("   strlen = %lu\n", ft_strlen_1(str));
	printf("strlen v2 = %d\n", ft_strlen_v2(str));

	return (0);
}