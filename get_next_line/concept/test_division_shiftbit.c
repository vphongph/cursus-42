/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_division_shiftbit.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 01:19:10 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/14 02:01:18 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int main(void)
{
	size_t i = 1000000000000;
	// int j;

	// while (i > 0)
	// {
	// 	// j = j / 2;
	// 	j = j >> 1;
	// 	i--;
	// }

	while (i / 512)
		i -= 512;
	while (i >> 9)
		i -= 512;


	return (0);
}