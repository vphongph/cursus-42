/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/15 19:01:07 by vphongph         ###   ########.fr       */
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

	i = 0;
	j = 0;
	if (!(tmp = ft_memalloc(1)))
	{
		ft_putstr_fd(RED"\aGNL malloc failed\n"RESET, 2);
		return (1);
	}
	if (!(buf = ft_memalloc(BUFF_SIZE)))
	{
		ft_putstr_fd(RED"\aGNL malloc failed\n"RESET, 2);
		free(tmp);
		return (1);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = ft_memjoinfree_l(tmp, buf, j, ret);
		j += ret;
		while (tmp[i] != '\n' && ret > 0)
		{
			i++;
			ret--;
		}
		if (tmp[i] =='\n')
		{
			printf("j = %lu\n", j);
			printf("i = %lu\n", i);
			*line = ft_strsub((char *)tmp, 0, i);
			write(1, *line, i);
			free(tmp);
			free(buf);
			return (0);
		}
	}
	printf("j = %lu\n", j);
	printf("i = %lu\n", i);
	// *line = ft_memdup(tmp, j);
	*line = ft_strsub((char *)tmp, 0, j);
	write(1, *line, j);
	free(tmp);
	free(buf);


	// tmp =s

	return (0);
}

int		main(int ac, char** av)
{
	int fd;
	char *str;
	// int i = 1000000;

	fd = 0;

	if (ac == 2)
	{
		// while (i--)
		// {
			if ((fd = open(av[1], O_RDONLY)) == -1)
			{
				ft_putstr_fd(RED"\aOpen failed\n"RESET, 2);
				return (1);
			}
			get_next_line(fd, &str);
			// ft_putstr(str);
			if (close(fd) == -1)
			{
				ft_putstr_fd(RED"\aClose failed\n"RESET, 2);
				return (1);
			}
		// }
	}
	else
	{
		get_next_line(fd, &str);
		// ft_putstr(str);
	}
	// while (1)
	// {}
	return (0);
}
