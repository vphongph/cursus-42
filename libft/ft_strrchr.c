/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:02:36 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 20:03:06 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	if (len == 0)
		return (NULL);
	while (len-- > 0)
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	return (NULL);
}
