/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:07:55 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/22 23:19:13 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;
	size_t i;
	size_t count;

	len = ft_strlen(*needle);
	while (haystack[i] && needle[i])
	{
		if (haystack[i] == needle[i])
			count++;


			
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
