/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 02:03:33 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 17:27:32 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	size_t n = 8;
	char *s = "un deux 9";
	char *s2 = "9";

	// char	buf2[] = "ozarabozaraboze123";

	// mt_assert(strcmp(ft_strnstr(buf2, "ozaraboze", 15), "ozaraboze123") == 0);


	printf("   strnstr = %s\n", strnstr(s, s2, n));
	printf("ft_strnstr = %s\n",ft_strnstr(s, s2, n));
	// printf("poshay = %s\n",ft_strnstr(s, s2, n));

	return (0);
}
