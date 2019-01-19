/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_gnl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 04:22:17 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 05:35:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc/malloc.h>

int		get_next_line(const int fd, char **line);

int		main(int ac, char **av)
{
	int		fd = 0;
	int		i = 1;
	int		j = 0;
	char	*str = NULL;

	if (ac >= 2)
	{
		while (i < ac)
		{
			if ((open(av[i++], O_RDONLY)) == -1)
				ft_putstr_fd_v2(RED"\aOpen failed\n"RESET, 2);
		}
		fd = 3;
		while (fd < ac + 2)
		{
			while ((j = get_next_line(fd, &str)) > 0)
			{
				// write(1, str, j);
				// printf("\n");
				printf("%s\n", str);
				free(str);
				str = NULL;
			}
			printf("%d\n",get_next_line(fd, &str));
			free(str);
			str = NULL;
			fd++;
		}
		fd--;
		while (fd > 2)
			if (close(fd--))
				ft_putstr_fd_v2(RED"\aClose failed\n"RESET, 2);
	}
	else
		while (get_next_line(fd, &str) > 0)
	// sleep(3);
	return (0);
}