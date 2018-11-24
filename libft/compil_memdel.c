/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:18:02 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/24 18:38:40 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{	

	void **tab;

	void *str = "Hello";

	tab = ft_memalloc(2 * sizeof (void));

	*(tab + 1) = 0;

	*tab = ft_memalloc(6 * sizeof (void));

	// *tab = "Hello";

	*tab = str;

	ft_memdel(tab);

	printf("%s\n", *tab);

	printf("%lu\n", sizeof (void));

	return (0);
}