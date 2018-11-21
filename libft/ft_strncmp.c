/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:21:07 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 22:36:52 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
		&& (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		&& i < n)
		i++;
	if (i == n)
		return (((unsigned char *)s1)[i - 1] - ((unsigned char *)s2)[i - 1]);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
