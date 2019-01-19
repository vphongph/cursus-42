/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 18:29:13 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 17:52:16 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub_v2(char *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(s && (str = (char *)malloc(len + 1))))
		return (NULL);
	str[len] = 0;
	s = &s[start];
	return (ft_memcpy_v2(str, s, len));
}
