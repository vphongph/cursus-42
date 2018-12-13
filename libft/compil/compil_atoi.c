/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:54:54 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/22 17:31:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int		main(void)
{

	// char s[11] = {'1','2','3','4','5','6','7','8','9','z','\0'};
	char s2[] = "-9223372036854775809";

	printf("   atoi = %d\n", atoi(s2));
	printf("ft_atoi = %d\n", ft_atoi(s2));

	// printf("s2 = %s\n", s2);
	// printf("s3 = %s\n", s3);

	// printf("%d, %d, %d, %d, %d\n", '\f', '\t', '\n', '\r', '\v');


	return (0);
}

/*
** ATTENTION INITIALISER SES VARIABLES SINON INDETER, ET BOOM
*/