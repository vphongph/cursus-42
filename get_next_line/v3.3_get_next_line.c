/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/14 06:42:43 by vphongph         ###   ########.fr       */
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
	t_fdDat dat;

	dat.s = NULL;
	dat.index_fd = 0;
	dat.size_s = 0;
	if ((*buf = ((int)BUFF_SIZE < 0 ? NULL : (char *)ft_memalloc(BUFF_SIZE)))
		&& line && !read(fd, *buf, 0)
			&& (*dlst ? *dlst : (*dlst = ft_dlstnew(&dat, sizeof(t_fdDat)))))
		return (0);
	// ft_memdel((void *)buf);
	free(*buf);
	if (*dlst)
	{
		ft_memdel((void *)&((t_fdDat *)(*dlst)->content)->s);
		ft_memdel((void *)&(*dlst)->content);
	}
	ft_memdel((void *)dlst);
	ft_putstr_fd_v2(RED"\aGNL -> check ∅\n"RESET, 2);

	return (1);
}

static int	gnl1_0(char **line, t_dlist **dlst, int *i, char **buf)
{
	t_fdDat	*ss;

	ss = ((t_fdDat *)(*dlst)->content);
	ft_memdel((void *)buf);
	if (i[2] == 'Z')
	{
		(i[0] + 1) ? *line = ft_strsub_v2(ss->s, 0, i[0] + 1) : *line;
		(i[0] + 1) ? write(1, *line, i[0] + 2),  ft_putstr_v2(FEDERATION"%\n"RESET): ft_putstr_v2(YELLOW"%\n"RESET);
		ft_memdel((void *)&ss->s);
		ft_memdel((void *)&ss);
		ft_memdel((void *)dlst);
	}
	i[2] == 'Z' ? *line : (*line = ft_strsub_v2(ss->s, 0, i[0]));
	if (i[2] == 'S' && ((ss->size_s -= i[0] + 1) == ss->size_s))
	{
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], ss->size_s);
		write(1, *line, i[0] + 1);
		ft_putstr_v2(ASSEMBLY"%\n"RESET);
	}
	if (i[2] == 'R' && ((ss->size_s = i[1] - 1) == ss->size_s))
	{
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], i[1] - 1);
		write(1, *line, i[0] + 1);
		ft_putstr_v2(ALLIANCE"%\n"RESET);
	}
	return (i[2] == 'Z' ? 0 : 1);
}

/*
** ATTENTION int i
** i[0] = index dans string
** i[1] = val ret du READ
** i[2] = val abritraire à stocker
*/

int			get_next_line(const int fd, char **line)
{
	static t_dlist	*dlst;
	char			*buf;
	int				i[3];

	i[0] = -1;
	i[2] = 'Z';
	if ((check(fd, line, &buf, &dlst)))
		return(-1);
	((t_fdDat *)dlst->content)->index_fd = fd;
	while ((i[0] + 1) < ((t_fdDat *)dlst->content)->size_s)
		if (((t_fdDat *)dlst->content)->s[++i[0]] == '\n' && (i[2] = 'S'))
			return (gnl1_0(line, &dlst, i, &buf));
	while ((i[1] = read(((t_fdDat *)dlst->content)->index_fd, buf, BUFF_SIZE)))
	{
		((t_fdDat *)dlst->content)->s = ft_memjoinfree_l(
			((t_fdDat *)dlst->content)->s,buf, ((t_fdDat *)dlst->content)->size_s, i[1]);
		((t_fdDat *)dlst->content)->size_s += i[1];
		while (i[1] > 0 && ((t_fdDat *)dlst->content)->s[++i[0]] != '\n')
			i[1]--;
		if (((t_fdDat *)dlst->content)->s[i[0]] == '\n' && (i[2] = 'R'))
			return (gnl1_0(line, &dlst, i, &buf));
	}
	return (gnl1_0(line, &dlst, i, &buf));
}

int			main(int ac, char **av)
{
	int		fd;
	char	*str = NULL;

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
		fd--;

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

	// sleep(3);

	return (0);
}
