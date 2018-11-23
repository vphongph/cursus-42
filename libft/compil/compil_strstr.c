/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:59:22 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 01:02:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	// size_t n = 2;
	char *s = "ab";
	char *s2 = "b";

	printf("   strstr = %s\n", strstr(s, s2));
	printf("ft_strstr = %s\n",ft_strstr(s, s2));

	return (0);
}
