/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:00:26 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/27 21:40:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = ft_memalloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (str);
}