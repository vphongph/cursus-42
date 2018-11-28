/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:57:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 21:03:08 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_countword(char const *s, char c, size_t *len);

int		main(int argc, char const *argv[])
{
	size_t len;
	len = 0;
	char *str = "   Hello   ca gaze ?   ";
	printf("nombre = %lu\n", ft_countword(str, 32, &len));
	printf("maxlen = %lu\n", len);
	// printf("%ld\n", sizeof(*str));
	return (0);
}