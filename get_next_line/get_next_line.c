/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/27 23:19:10 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int		get_next_line(const int fd, char **line)
{
	static char *tmp;
	char *buf;
	int ret;
	int i = -1;
	static size_t j = 0;

	if (!tmp)
		tmp = ft_memalloc(0);
	if (!(line && tmp && (buf = ft_memalloc(BUFF_SIZE))))
	{
		free(tmp);
		free(buf);
		ft_putstr_fd_v2(RED"\aGNL -> pointer ∅ | malloc ∅\n"RESET, 2);
		return (-1);
	}
	while (i < (int)j)
	{
		ret = read(fd, buf, BUFF_SIZE);
		printf(BLUE"%d"RESET"\n", ret);
		printf(YELLOW"Lecture + ce qui a été lu en trop :"RESET"\n");
		tmp = ft_memjoinfree_l(tmp, buf, j, ret);
		write(1, tmp, j + ret);
		ft_putstr_v2(FEDERATION"%\n"RESET);
		j += ret;
		printf("%lu\n", j);
		printf("%d\n", ret);
		while (++i < (int)j && tmp[i] != '\n')
			;
		printf(YELLOW"Checkpoint 2"RESET"\n");
		if (tmp[i-1] =='\n')
		{
			*line = ft_strsub_v2(tmp, 0, i);
			write(1, *line, i + 1);
			ft_putstr_v2(ALLIANCE"%\n"RESET);
			break;
		}
	}
	if (i < ret)
	{
		tmp = ft_memcpy_v2(tmp, &tmp[i + 1], ret - 1);
		tmp[ret - 1] = 0;
		printf(YELLOW"Lu en trop :"RESET"\n");
		write(1, tmp, ret -1);
		ft_putstr_v2(ORDER"%\n"RESET);
		return (1);
	}
	printf("PAS de \\n\n");
	printf("i = %d\n", i);
	printf("ret = %d\n", ret);
	fflush(stdout);
	*line = ft_strsub_v2(tmp, 0, i);
	write(1, *line, i + 1);
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
	// str = (char *)malloc(1);

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
			// get_next_line(fd, &str);


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

	return (0);
}
