/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:07:55 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 23:01:00 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] && (haystack[i] == needle[i]))
			i++;
		if (!(needle[i]))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
