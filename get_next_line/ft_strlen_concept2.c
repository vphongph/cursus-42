/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_concept2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 20:12:05 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/17 21:05:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	detectnull(short s)
{
	return ((s - 0x0101) & ~s & 0x8080);
}

size_t		ft_strlen_concept2(char *s)
{
	char *str;

	str = s;
	while (!(detectnull(*(short *)str)))
		str += sizeof(short);
	if (*str)
		str++;
	return (str - s);
}
