/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:27:36 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 23:53:33 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_free(char *s1, char *s2, char c)
{
	c == 'l' ? free(s1) : s1;
	c == 'r' ? free(s2) : s2;
	c == 'b' ? free(s1) : s1;
	c == 'b' ? free(s2) : s2;
}

char		*ft_strjoinfree(char const *s1, char const *s2, char c)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2 || !(str = ft_memalloc(sizeof(*str)
		* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	ft_free((char *)s1, (char *)s2, c);
	return (str);
}
