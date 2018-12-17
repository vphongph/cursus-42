/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 01:57:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/17 02:47:58 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen_v2(char *s)
{
	char *str;

	str = s;
	while (*(long long *)str > 72340172838076673)
	{
		str += sizeof(long long);
		write(1, "haha\n", 5);
	}
	while (*str)
	{
		str++;
		write(1, "hoho\n", 5);
	}
	printf("%p\n", str);
	printf("%p\n", s);
	return (str - s);
}
