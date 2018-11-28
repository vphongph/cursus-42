/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:49:51 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 23:51:34 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_countword(char const *s, char c, size_t *maxlen)
{
	size_t	i;
	size_t	count;
	size_t	tmp;

	i = 0;
	count = 0;
	tmp = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		s[i] && s[i] != c ? count++ : count;
		tmp = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			tmp++;
		}
		tmp > *maxlen ? *maxlen = tmp : *maxlen;
	}
	return (count);
}
