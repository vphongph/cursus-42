/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/14 16:54:28 by vphongph         ###   ########.fr       */
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

int		ft_count(char* str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'Z')
			return(1);
		i++;
	}
	return(0);
}

int		ft_count_if(char **tab, int(*f)(char*));

int		main(void)
// int	main(int ac, char **av)
{

	char *str[5];
	// int y;


	str[0] = "ab";
	str[1] = "ZZ";
	str[2] = "aZ";
	str[3] = "Zb";
	str[4] = 0;
	
		// y = ft_count(str[2]);
	printf("%d\n", ft_count_if(str, ft_count));

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));
	// ft_putchar('\n');
	return (0);
}
