/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 01:46:20 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 23:02:01 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && j < len)
	{
		i = 0;
		while (haystack[i] && (haystack[i] == needle[i]) && (j < len))
		{
			i++;
			j++;
		}
		if (!(needle[i]))
			return ((char *)haystack);
		haystack++;
		j = (i == 0) ? j + 1 : j - (i - 1);
	}
	return (NULL);
}
