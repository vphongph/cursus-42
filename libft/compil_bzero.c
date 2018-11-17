/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/17 23:27:36 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"


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

int		main(void)
// int	main(int ac, char **av)
{
	// size_t length = 1;

	// char str[11] = "qweasdzxc!";
	// char str2[11] = "qweasdzxc!";
	
	int	tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int	tab2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	// printf("\n         str = %s", str);
	// printf("\n        str2 = %s", str2);

	fflush(stdout);
	write(1, "\n", 1);

	int i = 0;
	while (i < 20)
	{
		printf("%d", tab[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	
	fflush(stdout);
	write(1, "\n", 1);

	i = 0;
	while (i < 20)
	{
		printf("%d", tab2[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}

	// bzero(str, length);
	// ft_bzero(str2, length);

	// bzero(tab, sizeof(int) * 3);
	// ft_bzero(tab2, sizeof(int) * 3);
	bzero(tab, 69);
	ft_bzero(tab2, 69);

	// printf("\n\n   bzero str = %s", str);
	// printf("\nft_bzero str = %s", str2);


	fflush(stdout);
	write(1, "\n", 1);

	i = 0;
	while (i < 20)
	{
		printf("%d", tab[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}
	
	fflush(stdout);
	write(1, "\n", 1);

	i = 0;
	while (i < 20)
	{
		printf("%d", tab2[i++]);
		fflush(stdout);
		write(1, " ", 1);
	}

	// printf("\n%lu", sizeof(char));
	// printf("\n%lu", sizeof(short));
	// printf("\n%lu", sizeof(int));
	// printf("\n%lu", sizeof(long));
	// printf("\n%lu", sizeof(long long));


	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	// ft_putchar('\n');
	return (0);
}
