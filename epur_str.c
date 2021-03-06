/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:31:20 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 18:17:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char*	rework_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\t')
			str[i] = ' ';
		i++;
	}
	i--;
	printf("%d\n", i);
	while (str[i])
	{
		str[i] = '\0';
		i--;
	}
	while (*str == ' ')
		str++;
		
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	printf("\nav =%s\n", av[1]);

	char *tab;

	tab = rework_str(av[1]); 
	while (*tab)
	{	
		while (*tab && *tab != ' ')
		{
			write(1, tab, 1);
			tab++;
		}
		if (*tab)
			write(1, " ",1);
		while (*tab == ' ')
			tab++;
	}

//	printf("\nrework_str(av) =%s", rework_str(av[1]));

	return (0);
}

//pour connaitre les numéros correspondants des caract à ignorer (ex: ATOI)
// ft NRV

//printf("%d\n", '\f'); = 12
//printf("%d\n", '\t'); = 9
//printf("%d\n", '\n'); = 10
//printf("%d\n", '\r'); = 13
//printf("%d\n", '\v'); = 11