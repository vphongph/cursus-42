/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/10 23:39:58 by vphongph         ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
// int	main(int ac, char **av)
{

	int a = -100;
	int b = -4;
	int c = 0;
	int d = 0;
	int* div = &c;
	int* mod = &d;

	printf(" a = %i\n b = %i\n div = %i\n mod = %i", a, b, *div, *mod);

	ft_div_mod(a, b, div, mod);

	printf("\n\n a = %i\n b = %i\n div = %i\n mod = %i", a, b, *div, *mod);

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));
	// ft_putchar('\n');
	return 0;
}
