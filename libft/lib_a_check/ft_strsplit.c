/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:31:58 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 03:20:26 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_fill(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			tab[j][k] = s[i];
			k++;
			i++;
		}
		j++;
		k = 0;
	}
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	maxlen;
	size_t	nb;
	char	**tab;

	i = 0;
	maxlen = 0;
	if (!s)
		return (NULL);
	nb = ft_countword(s, c, &maxlen);
	if (!(tab = (char **)ft_memalloc((nb + 1) * sizeof(*tab))))
		return (NULL);
	while (i < nb)
	{
		if (!(tab[i] = (char *)ft_memalloc((maxlen + 1) * sizeof(**tab))))
		{
			maxlen = 0;
			while (maxlen < i)
				free(tab[maxlen++]);
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (ft_fill(s, c, tab));
}
