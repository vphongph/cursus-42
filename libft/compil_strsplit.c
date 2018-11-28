/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:57:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 19:16:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t countword(char const *s, char c);

int main(int argc, char const *argv[])
{
	char *str = "";
	printf("nombre = %zu\n", countword(str, 32));
	// printf("%ld\n", sizeof(*str));
	return 0;
}