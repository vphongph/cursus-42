/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:41:46 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 18:25:16 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countword(char const *s, char c)
{
	size_t	i;
	int		count;

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

// char	**ft_strsplit(char const *s, char c)
// {
// 	size_t i;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	while (s[i])
// 		while (s[i] == '*')
// 			i++;
// 		while()
// }