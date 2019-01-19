/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3brouillon_get_next_line.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/11 16:33:46 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


#include <stdio.h>
#include <malloc/malloc.h>

static int	check(int fd, char **line, char **buf, t_dlist **dlst)
{
	// t_fdDat *dat;
	t_fdDat dat;
	dat.s = NULL;
	dat.index_fd = 0;
	dat.size_s = 0;

	if ((*buf = ((int)BUFF_SIZE < 0 ? NULL : (char *)ft_memalloc(BUFF_SIZE)))
		&& line
		&& !read(fd, *buf, 0)
		&& (*dlst ? *dlst : (*dlst = ft_dlstnew(&dat, sizeof(t_fdDat)))))
	{
		free(*buf);
		buf = NULL;
		// dat.s = malloc(0);
		printf("     malloc size dat s = %lu\n", malloc_size(dat.s));

		// dat.s = ((t_fdDat *)(*dlst)->content)->s;
		printf("     malloc size dat.s = %lu\n", malloc_size(dat.s));
		printf("     malloc size dlst = %lu\n", malloc_size(*dlst));
		free(((t_fdDat *)(*dlst)->content)->s);
		free((*dlst)->content);
		// ((t_fdDat *)(*dlst)->content)->s = NULL;
		free(*dlst);
		// *dlst = NULL;
		// free(dat.s);
		// dat.s = NULL;
		printf("     malloc size dlst = %lu\n\n", malloc_size(*dlst));


		// printf("     malloc size dlst = %lu\n", malloc_size(*dlst));
		// printf("  malloc size content = %lu\n", malloc_size((*dlst)->content));
		// printf("    malloc size dat s = %lu\n", malloc_size(dat.s));
		// printf("malloc size content s = %lu\n", malloc_size(((t_fdDat*)(*dlst)->content)->s));
		// printf("fd = %d\n",((t_fdDat*)(*dlst)->content)->index_fd = fd);
		return (0);
	}
	free(*buf);
	ft_putstr_fd_v2(RED"\aGNL -> check ∅\n"RESET, 2);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static t_dlist*		dlst;
	char				*buf;
	// int 				ret;
	// int 				i = -1;

	if (check(fd, line, &buf, &dlst))
		return(-1);

	// free(dlst);

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

	// dlst->((t_fdDat*)content)->index_fd = fd;

	// while ((i + 1) < dlst->size_s)
	// {
	// 	if (dlst->s[++i] == '\n')
	// 	{
	// 		*line = ft_strsub_v2(dlst->s, 0, i);
	// 		write(1, *line, i + 1);
	// 		ft_putstr_v2(ASSEMBLY"%\n"RESET);
	// 		dlst->s = ft_memcpy_v2(dlst->s, &dlst->s[i + 1], dlst->size_s -= i + 1);
	// 		free(buf);
	// 		return (1);
	// 	}
	// }
	// while ((ret = read(dlst->index_fd, buf, BUFF_SIZE)))
	// {
	// 	dlst->s = ft_memjoinfree_l(dlst->s, buf, dlst->size_s, ret);
	// 	dlst->size_s += ret;
	// 	while (ret > 0 && dlst->s[++i] != '\n')
	// 		ret--;
	// 	if (dlst->s[i] == '\n')
	// 	{
	// 		*line = ft_strsub_v2(dlst->s, 0, i);
	// 		write(1, *line, i + 1);
	// 		ft_putstr_v2(ALLIANCE"%\n"RESET);
	// 		dlst->s = ft_memcpy_v2(dlst->s, &dlst->s[i + 1], ret - 1);
	// 		dlst->size_s = ret - 1;
	// 		// write(1, dlst->s, ret - 1);
	// 		// ft_putstr_v2(ORDER"%\n"RESET);
	// 		free(buf);
	// 		return (1);
	// 	}
	// }
	// free(buf);
	// if (!(i + 1))
	// {
	// 	// ft_putstr_v2(YELLOW"%\n"RESET);
	// 	free(dlst);
	// 	dlst = NULL;
	// 	return (0);
	// }
	// *line = ft_strsub_v2(dlst->s, 0, i + 1);
	// write(1, *line, i + 2);
	// ft_putstr_v2(FEDERATION"%\n"RESET);
	// free(dlst->s);
	// dlst->s = NULL;
	// free(dlst);
	// dlst = NULL;
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
		// printf("%d\n",get_next_line(fd, &str));
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
