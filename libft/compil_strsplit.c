/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:57:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 23:49:10 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

size_t		ft_countword(char const *s, char c, size_t *maxlen);

int		main(void)
{
	size_t len;
	len = 0;
	size_t i;
	i = 0;

	char *str = "  Hello  Victor    ca gaze ?    ";
	printf("nombre = %lu\n", ft_countword(str, 32, &len));
	printf("maxlen = %lu\n", len);

	char **tab;

	tab = ft_strsplit(str, 32);

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

	// printf("%ld\n", sizeof(*str));
	return (0);
}