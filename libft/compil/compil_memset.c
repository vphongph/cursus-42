/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/16 18:23:03 by vphongph         ###   ########.fr       */
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
	int i = 169;
	size_t length = 5;
	//size_t lol = -1;
	char str[11] = "qweasdzxc!";
	char str2[11] = "qweasdzxc!";
	
	void *b = str;
	void *b2 = str2;

	printf("\n      str = %s", str);
	printf("\n     str2 = %s", str2);

	printf("\n   memset = %s", memset(b, i, length));
	printf("\nft_memset = %s", ft_memset(b2, i, length));

	printf("\n%c%c%c\n\n", 226, 152, 131);

	// printf("\nsize = %lu", sizeof(size_t));
	//printf("\nsize_t = %lu", lol);
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));
	// ft_putchar('\n');
	return (0);
}
