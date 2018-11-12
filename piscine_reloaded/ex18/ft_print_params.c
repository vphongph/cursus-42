/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:50:19 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/12 18:22:59 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
		return (0);
	i = 1;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
			j++;
		write(1, av[i], j);
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}
