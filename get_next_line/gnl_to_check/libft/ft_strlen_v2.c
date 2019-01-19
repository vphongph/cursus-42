/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 21:05:38 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 06:33:04 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_strlen_v2(char *s)
{
	char *str;

	if (!s)
		return (-1);
	str = s;
	while (1)
	{
		if (!*str)
			return (str - s);
		if (!*(str + 1))
			return ((str + 1) - s);
		if (!*(str + 2))
			return ((str + 2) - s);
		if (!*(str + 3))
			return ((str + 3) - s);
		if (!*(str + 4))
			return ((str + 4) - s);
		if (!*(str + 5))
			return ((str + 5) - s);
		if (!*(str + 6))
			return ((str + 6) - s);
		if (!*(str + 7))
			return ((str + 7) - s);
		str += 8;
	}
}
