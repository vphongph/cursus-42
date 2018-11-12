/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/13 00:37:39 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int a)
{
	if (a >= 10)
		ft_print(a / 10);
	ft_putchar(a % 10 + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	a = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		a = (unsigned int)(-nb);
	}
	ft_print(a);
}

//printf("blabla = \n%s", arg);

int		*ft_range(int min, int max);

int		main(void)
// int	main(int ac, char **av)
{

	int min = 1;
	int max = 2;

	printf("\nmin = %d, max = %d, ft_range = %d",min, max, *ft_range(min, max));

	int *tab = ft_range(min, max);
	int i = 0;
	while (i < (max - min))
		printf("[%d]\n", tab[i++]);

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));
	// ft_putchar('\n');
	return (0);
}
