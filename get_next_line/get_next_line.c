/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/21 04:45:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int		get_next_line(const int fd, char **line)
{
	char *tmp;
	char *buf;
	int ret;
	size_t i;
	size_t j;

	i = -1;
	j = 0;
	if (!(line && (tmp = ft_memalloc(0)) && (buf = ft_memalloc(BUFF_SIZE))))
	{
		free(tmp);
		free(buf);
		ft_putstr_fd_v2(RED"\aGNL malloc ∅\n"RESET, 2);
		return (-1);
	}


	// free(*line);

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = ft_memjoinfree_l(tmp, buf, j, ret);
		j += ret;
		while (ret > 0 && tmp[++i] != '\n')
			ret--;
		if (tmp[i] =='\n')
		{
			printf("y'a un \\n\n");
			printf("j = %lu\n", j);
			printf("i = %lu\n", i);
			fflush(stdout);
			// free(*line);
			*line = ft_strsub_v2(tmp, 0, i);
			write(1, *line, i + 1);
			ft_putstr_v2(ALLIANCE"%\n"RESET);
			free(tmp);
			free(buf);
			return (1);
		}
	}
	printf("PAS de \\n\n");
	printf("j = %lu\n", j);
	printf("i = %lu\n", i);
	fflush(stdout);
	// free(*line);
	*line = ft_strsub_v2(tmp, 0, i + 1);
	write(1, *line, i + 2);
	ft_putstr_v2(ALLIANCE"%\n"RESET);
	free(tmp);
	free(buf);

	return (0);
}

int		main(int ac, char **av)
{
	int fd;
	char *str = NULL;
	// char *str = "lol";
	// char const *str;
	// const char *str;
	// char str[10];
	// char str[10] = {'a','b','c',0};

	str = (char *)malloc(1000);

	// int i = 10000;

	fd = 0;

	if (ac == 2)
	{
		// while (i--)
		// {
			if ((fd = open(av[1], O_RDONLY)) == -1)
			{
				ft_putstr_fd_v2(RED"\aOpen failed\n"RESET, 2);
				return (1);
			}
			get_next_line(fd, &str);
			ft_putstr_v2(str);
			free(str);
			if (close(fd) == -1)
			{
				ft_putstr_fd_v2(RED"\aClose failed\n"RESET, 2);
				return (1);
			}
		// }
	}
	else
	{
		get_next_line(fd, &str);
		ft_putstr_v2(str);
		free(str);
	}

	sleep(1);

	return (0);
}
