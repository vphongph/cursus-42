/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:41:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 21:10:05 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c, size_t *maxlen)
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
		while(s[i] == c)
			i++;
		(s[i] && s[i] != c ? count++: count);
		tmp = 0;
		while (s[i] && s[i] !=c)
		{
			i++;
			tmp++;
		}
		(tmp > *maxlen ? *maxlen = tmp : *maxlen);
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t maxlen;
	char **tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if(!(tab = ft_memalloc((ft_countword(s, c, &maxlen) + 1) * sizeof(**tab))))
		return (NULL);
	tab[ft_countword(s, c, &maxlen)] = 0;

	


	while (tab[i])
	{
		while (tab[i][j])
	}

}