/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_concept1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 01:57:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/17 21:05:43 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define DETECTNULL(X) (((X) - 0x0101010101010101) & ~(X) & 0x8080808080808080)

size_t	ft_strlen_concept1(char *s)
{
	char *str;

	str = s;
	while (!(DETECTNULL(*(long long *)str)))
	{
		str += sizeof(long long);
	}
	while (*str)
	{
		str++;
	}
	return (str - s);
}
