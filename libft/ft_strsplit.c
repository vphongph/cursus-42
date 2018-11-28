/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:41:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 19:26:45 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while(s[i] == c)
			i++;
		if (s[i] && s[i] !=c)
			count++;
		while (s[i] && s[i] !=c)
			i++;
	}
	return (count);
}

static char	*ft_strtrimc(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s);
	if (j != i)
		j--;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (ft_strsub(s, (unsigned int)i, (j - i + 1)));
}

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	char **tab;

	i = 0;
	if (!s)
		return (NULL);
	tab = ft_memalloc((countword(s, c) + 1) * sizeof(**tab));
	tab[countword(s, c)] = 0;

}