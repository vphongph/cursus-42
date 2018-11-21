/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:02:36 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 13:15:24 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		if (*s == (char)c)
			j = i;
		i++;
	}
	if (j == i)
		return ((char *)&s[j]);
	else if ((char)c == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
