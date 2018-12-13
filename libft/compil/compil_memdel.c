/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:18:02 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/03 23:25:54 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{	

	// char **tab;

	char *str;

	str = ft_memalloc(6 * sizeof (str));

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';

	// tab = &str;

	// str = NULL;
	// tab = NULL;

	printf("%s\n", str);

	ft_memdel((void *)&str);

	printf("%s\n", str);

	return (0);
}
