/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:42:45 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 01:26:20 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		str[i] = '\0';
		i--;
	}

}

