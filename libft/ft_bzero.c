/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:34:13 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/16 22:12:02 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (n >= sizeof(long long))
		{
			((long long *)s)[i] = 0;
			i += sizeof(long long);
		}
		else
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}


int main(int argc, char const *argv[])
{
	char	*ptr  = 10;
	int		*ptr2 = 10;
	int		i = 5;

	(valeur de ptr) + (taille de lecture * index)

	ptr[i] => 10 + (sizeof(char) * 5) =>10 + (1 * 5) => 15
	ptr2[i] => 10 + (sizeof(int) * 5) => 10 + (4 * 5) => 30
	return 0;
}