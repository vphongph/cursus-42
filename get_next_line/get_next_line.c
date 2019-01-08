/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/08 23:49:19 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


#include <malloc/malloc.h>

static int	check(int fd, char **line, char **buf, t_fdDat **dat)
{
	if ((*buf = ((int)BUFF_SIZE < 0 ? NULL : (char *)ft_memalloc(BUFF_SIZE)))
		&& line
		&& !read(fd, *buf, 0)
		&& (*dat ? *dat : (*dat = (t_fdDat *)ft_memalloc(sizeof(t_fdDat)))))
		return (0);
	free(*buf);
	ft_putstr_fd_v2(RED"\aGNL -> check ∅\n"RESET, 2);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	// static t_fdDat*	begin;
	static t_fdDat*		dat = 0x0;
	char				*buf;
	int 				ret;
	int 				i = -1;

	if (check(fd, line, &buf, &dat))
		return(-1);

	// if (!(line && dat->s && (buf = (char *)ft_memalloc(BUFF_SIZE))))
	// {
	// 	free(dat->s);
	// 	free(buf);
	// 	ft_putstr_fd_v2(RED"\aGNL -> pointer ∅ | malloc ∅\n"RESET, 2);
	// 	return (-1);
	// }

	// dat = begin;
	// while (dat->index_fd != fd)
	// {
	// 	dat = dat->next;
	// 	if (dat == NULL)

	// }

	dat->index_fd = fd;

	while ((i + 1) < dat->size_s)
	{
		if (dat->s[++i] == '\n')
		{
			*line = ft_strsub_v2(dat->s, 0, i);
			// write(1, *line, i + 1);
			// ft_putstr_v2(ASSEMBLY"%\n"RESET);
			dat->s = ft_memcpy_v2(dat->s, &dat->s[i + 1], dat->size_s -= i + 1);
			free(buf);
			return (1);
		}
	}
	while ((ret = read(dat->index_fd, buf, BUFF_SIZE)))
	{
		dat->s = ft_memjoinfree_l(dat->s, buf, dat->size_s, ret);
		dat->size_s += ret;
		while (ret > 0 && dat->s[++i] != '\n')
			ret--;
		if (dat->s[i] == '\n')
		{
			*line = ft_strsub_v2(dat->s, 0, i);
			// write(1, *line, i + 1);
			// ft_putstr_v2(ALLIANCE"%\n"RESET);
			dat->s = ft_memcpy_v2(dat->s, &dat->s[i + 1], ret - 1);
			dat->size_s = ret - 1;
			// write(1, dat->s, ret - 1);
			// ft_putstr_v2(ORDER"%\n"RESET);
			free(buf);
			return (1);
		}
	}
	free(buf);
	if (!(i + 1))
	{
		// ft_putstr_v2(YELLOW"%\n"RESET);
		free(dat);
		dat = NULL;
		return (0);
	}
	*line = ft_strsub_v2(dat->s, 0, i + 1);
	// write(1, *line, i + 2);
	// ft_putstr_v2(FEDERATION"%\n"RESET);
	free(dat->s);
	dat->s = NULL;
	free(dat);
	dat = NULL;
	return(0);
}

int		main(int ac, char **av)
{
	int fd;
	char *str = NULL;
	// char const *str;
	// const char *str;
	// char str[10];
	// char str[10] = {'a','b','c',0};
	// str = (char *)malloc(0);

	// int i = 10000;

	fd = 0;

	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
		{
			ft_putstr_fd_v2(RED"\aOpen failed\n"RESET, 2);
			return (1);
		}
		while (get_next_line(fd, &str) > 0)
		{
			free(str);
			str = NULL;
		}
		printf("%d\n",get_next_line(fd, &str));
		free(str);
		str = NULL;
		get_next_line(fd, &str);
		free(str);
		str = NULL;

		if (close(fd) == -1)
		{
			ft_putstr_fd_v2(RED"\aClose failed\n"RESET, 2);
			return (1);
		}
	}
	else
	{
		while (get_next_line(fd, &str))
		{}
	}

	sleep(3);

	return (0);
}
