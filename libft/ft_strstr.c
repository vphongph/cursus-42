/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:07:55 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 00:29:11 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	if (!*needle)
		return ((char* )haystack);

	while (*haystack)
	{	
		i = 0;
		while (haystack[i] == needle[i])
		{	
			if (!needle[i])
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
