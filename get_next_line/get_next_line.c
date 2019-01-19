/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 02:25:35 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 02:53:05 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


#include <stdio.h>
#include <malloc/malloc.h>

int				ft_dlstdelone(t_dlist **top, void (*del)(void *, size_t));
int				ft_dlstadd(t_dlist **top, t_dlist *new);


static t_dlist	*searchfd(int fd, t_dlist **top)
{
	t_fdDat dat;
	t_dlist *tmp;

	dat.s = NULL;
	dat.index_fd = fd;
	dat.size_s = 0;
	tmp = *top;

	while (tmp)
	{
		if (((t_fdDat *)(tmp)->content)->index_fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	ft_dlstadd(top, ft_dlstnew(&dat, sizeof(t_fdDat)));
	return (*top);
}

static t_dlist	*check(int fd, char **line, char **buf, t_dlist **dlst)
{
	t_dlist *cur;

	cur = NULL;
	if ((*buf = ((int)BUFF_SIZE < 0 ? NULL : (char *)ft_memalloc(BUFF_SIZE)))
		&& line && !read(fd, *buf, 0))
	{
		if ((cur = searchfd(fd, dlst)))
			return (cur);
	}
	free(*buf);
	return (NULL);
}

static int		loadline_saveremainder(char **line,
	t_dlist **dlst, int *i, t_dlist **cur)
{
	t_fdDat	*ss;

	*line = NULL;
	ss = ((t_fdDat *)(*cur)->content);
	if (i[2] == 'Z')
	{
		(i[0] + 1) ? *line = ft_strsub_v2(ss->s, 0, i[0] + 1) : *line;
		ft_memdel((void *)&ss->s);
		ft_dlstdelone(cur, NULL);
		*dlst = *cur;
		return (*line ? i[0] + 2 : 0);
	}
	i[2] == 'Z' ? *line : (*line = ft_strsub_v2(ss->s, 0, i[0]));
	if (i[2] == 'S' && ((ss->size_s -= i[0] + 1) == ss->size_s))
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], ss->size_s);
	if (i[2] == 'R' && ((ss->size_s = i[1] - 1) == ss->size_s))
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], i[1] - 1);
	return (i[0] + 1);
}

static int		readfd(t_dlist *cur, char *buf, int *i)
{
	while ((i[1] = read(((t_fdDat *)cur->content)->index_fd, buf, BUFF_SIZE)))
	{
		((t_fdDat *)cur->content)->s = ft_memjoinfree_l(
			((t_fdDat *)cur->content)->s,
				buf, ((t_fdDat *)cur->content)->size_s, i[1]);
		((t_fdDat *)cur->content)->size_s += i[1];
		while (i[1] > 0 && ((t_fdDat *)cur->content)->s[++i[0]] != '\n')
			i[1]--;
		if (((t_fdDat *)cur->content)->s[i[0]] == '\n' && (i[2] = 'R'))
			return (1);
	}
	return (0);
}

/*
** ATTENTION int i
** i[0] = index dans string
** i[1] = val ret du READ
** i[2] = val abritraire à stocker
*/

int				get_next_line(const int fd, char **line)
{
	static t_dlist	*dlst;
	t_dlist			*cur;
	char			*buf;
	int				i[3];

	i[0] = -1;
	i[2] = 'Z';
	if (!(cur = check(fd, line, &buf, &dlst)))
		return (-1);
	while ((i[0] + 1) < ((t_fdDat *)cur->content)->size_s)
	{
		if (((t_fdDat *)cur->content)->s[++i[0]] == '\n' && (i[2] = 'S'))
		{
			free(buf);
			return (loadline_saveremainder(line, &dlst, i, &cur));
		}
	}
	if (readfd(cur, buf, i))
	{
		free(buf);
		return (loadline_saveremainder(line, &dlst, i, &cur));
	}
	return (loadline_saveremainder(line, &dlst, i, &cur));
}

int				main(int ac, char **av)
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
				write(1, str, j);
				printf("\n");
				// printf("%s\n", str);
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
	return (0);
}
