/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/03 21:57:36 by vphongph         ###   ########.fr       */
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
	// static t_fddata*	begin;
	static t_fddata*	data;
	char				*buf;
	int 				ret;
	int 				i = -1;

	if (read(data->index_fd, buf, 0) == -1)
	{
		ft_putstr_fd_v2(RED"\aGNL -> read ∅\n"RESET, 2);
		return (-1);
	}

	// data = begin;
	// while (data->index_fd != fd)
	// {
	// 	data = data->next;
	// 	if (data == NULL)

	// }

	if (!data->str)
		data->str = ft_memalloc(0);
	if (!(line && data->str && (buf = ft_memalloc(BUFF_SIZE))))
	{
		free(data->str);
		free(buf);
		ft_putstr_fd_v2(RED"\aGNL -> pointer ∅ | malloc ∅\n"RESET, 2);
		return (-1);
	}

	while (i < data->size_str)
	{

	}
	while ((ret = read(data->index_fd, buf, BUFF_SIZE)))
	{
		data->str = ft_memjoinfree_l(data->str, buf, data->size_str, ret);
		while (ret > 0 && data->str[++i] != '\n')
			ret--;
		if (data->str[i] != '\n')
		{
			*line = ft_strsub_v2(data->str, 0, i + 1);
			if (ret)
			data->str = ft_memcpy_v2(data->str, &buf[i], ret);
			free(buf);
			break;
		}
	}

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
