/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/14 17:27:20 by vphongph         ###   ########.fr       */
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


void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
// int	main(int ac, char **av)
{

	int tab[10] = {1,2,3,4,5,6,7,8,9,10};
	// int y;
	
		// y = ft_count(str[2]);
	ft_foreach(tab, 100	, ft_putnbr);

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));
	// ft_putchar('\n');
	return (0);
}
