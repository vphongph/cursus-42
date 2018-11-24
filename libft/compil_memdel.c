/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:18:02 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/24 16:50:26 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int ac, char **av)
{	

	(void)ac;
	// char *tab[1];

	//char *str;

	//tab = &str;

	// tab[0] = (char *)malloc(6 * sizeof (*tab));

	// tab[0] = "Hello";

	// write(1, *tab, 5);

	// *tab = NULL;

	// write(1, *tab, 5);

	ft_memdel((void **)av);

	// printf("%s\n", *tab);

	return (0);
}