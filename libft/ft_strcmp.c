/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:33:54 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 21:43:42 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
		&& (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
