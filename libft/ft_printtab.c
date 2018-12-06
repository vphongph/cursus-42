/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:32:26 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/05 18:16:58 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printtab(char **tab)
{
	int i;

	i = 0;
	while (tab && tab[i])
	{
		ft_putstr(tab[i]);
		i++;
	}
	return (i);
}