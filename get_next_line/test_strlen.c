/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 02:07:42 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/17 02:23:34 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen_v2(char *s);

int		main(void)
{
	char str[] = "12345678";

	printf("      str = %s\n", str);
	printf("   strlen = %lu\n", ft_strlen(str));
	printf("strlen v2 = %lu\n", ft_strlen_v2(str));

	return (0);
}