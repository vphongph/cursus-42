/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:33:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 22:28:09 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	size_t n = 2;
	char s[11] = {'a','b','c','\0','t','H','u','i','o','p','\0'};
	char s2[11] = {'a','b','d','\0','t','H','u','i','o','p','\0'};

	printf("   strncmp = %d\n",strncmp(s, s2, n));
	printf("ft_strncmp = %d\n",ft_strncmp(s, s2, n));

	return (0);
}