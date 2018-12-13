/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_printab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:40:54 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 17:47:46 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	char *s = "lol";
	char **tab;

	tab = &s;
	tab[1] = 0;
	// tab = NULL;

	ft_printtab(tab);

	return (0);
}