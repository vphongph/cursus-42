/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:41:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 23:27:24 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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
		(s[i] && s[i] != c ? count++ : count);
		tmp = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			tmp++;
		}
		(tmp > *maxlen ? *maxlen = tmp : *maxlen);
	}
	return (count);
}

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
			j++;
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
	nb = 0;
	if (!s)
		return (NULL);
	nb = ft_countword(s, c, &maxlen);
	if (!(tab = ft_memalloc((nb + 1) * sizeof(*tab))))
		return (NULL);
	write(1,"caca1",5);
	while (i < nb)
	{
		if (!(tab[i] = ft_memalloc((maxlen + 1) * sizeof(**tab))))
			return (NULL);
		i++;
		write(1,"caca2",5);
	}
	return (ft_fill(s, c, tab));
}
