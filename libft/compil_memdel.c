/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:18:02 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/23 19:54:24 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{	
	char **tab;
	// char *str = "Hello";

	tab = NULL;

	// tab[0] = (char *)malloc(6);

	// printf("%s\n", tab[0]);

	ft_memdel((void **)tab);

	// printf("%s\n", tab[0]);

	return (0);
}