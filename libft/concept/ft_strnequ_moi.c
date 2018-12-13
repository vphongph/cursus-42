/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_moi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 02:25:33 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/27 02:30:14 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	i = 0;
	while (((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
		&& (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		&& i < n)
		i++;
	if (i == n || ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		return (1);
	return (0);
}
