/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/12 00:57:30 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
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
	if (!(buf = ft_memalloc(1)))
	{
		ft_putstr_fd(RED"\aGNL malloc failed\n"RESET, 2);
		free(tmp);
		return (1);
	}
	while ((ret = read(fd, buf, 1)) > 0)
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
			*line = ft_strsub((char *)tmp, 0, i);
			write(1, *line, i);
			// tmp_ptr = tmp
			// tmp = sub...
			free(tmp);
			break;
		}
	}
	// tmp =s

	return (0);
}

int		main(int ac, char** av)
{
	int fd;
	char *str;

	fd = 0;

	if (ac == 2)
	{

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
	}
	else
	{
		get_next_line(fd, &str);
		ft_putstr(str);
	}

	return (0);
}
