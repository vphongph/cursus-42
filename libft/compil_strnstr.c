/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 02:03:33 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 02:21:05 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	size_t n = 2;
	char *s = "awwwwwwwwwwwb";
	char *s2 = "wwwwwwwwwww";

	printf("   strnstr = %s\n", strnstr(s, s2, n));
	printf("ft_strnstr = %s\n",ft_strnstr(s, s2, n));

	return (0);
}
