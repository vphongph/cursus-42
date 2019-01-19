/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 02:25:35 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 05:57:47 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

static int		loadline_saveremainder(char **line,
	t_dlist **top, int *i, t_dlist **cur)
{
	t_fddat	*ss;

	*line = NULL;
	ss = ((t_fddat *)(*cur)->content);
	if (i[2] == 'Z')
	{
		(i[0] + 1) ? *line = ft_strsub_v2(ss->s, 0, i[0] + 1) : *line;
		ft_memdel((void *)&ss->s);
		ft_dlstdelone(cur, NULL);
		*top = *cur;
	}
	i[2] == 'Z' ? *line : (*line = ft_strsub_v2(ss->s, 0, i[0]));
	if (i[2] == 'S' && ((ss->size_s -= i[0] + 1) == ss->size_s))
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], ss->size_s);
	if (i[2] == 'R' && ((ss->size_s = i[1] - 1) == ss->size_s))
		ss->s = ft_memcpy_v2(ss->s, &ss->s[i[0] + 1], i[1] - 1);
	return (*line ? 1 : 0);
}

static int		readfd(t_dlist *cur, char *buf, int *i)
{
	while ((i[1] = read(((t_fddat *)cur->content)->index_fd, buf, BUFF_SIZE)))
	{
		((t_fddat *)cur->content)->s = ft_memjoinfree_l(
			((t_fddat *)cur->content)->s,
				buf, ((t_fddat *)cur->content)->size_s, i[1]);
		((t_fddat *)cur->content)->size_s += i[1];
		while (i[1] > 0 && ((t_fddat *)cur->content)->s[++i[0]] != '\n')
			i[1]--;
		if (((t_fddat *)cur->content)->s[i[0]] == '\n' && (i[2] = 'R'))
			return (1);
	}
	return (0);
}

static t_dlist	*search_or_create_fd(int fd, t_dlist **top)
{
	t_fddat dat;
	t_dlist *tmp;

	dat.s = NULL;
	dat.index_fd = fd;
	dat.size_s = 0;
	tmp = *top;
	while (tmp)
	{
		if (((t_fddat *)(tmp)->content)->index_fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	ft_dlstadd(top, ft_dlstnew(&dat, sizeof(t_fddat)));
	return (*top);
}

static t_dlist	*check(int fd, char **line, char **buf, t_dlist **top)
{
	if (!(*buf = ((int)BUFF_SIZE < 0 ? NULL : (char *)ft_memalloc(BUFF_SIZE)))
			|| !line
				|| read(fd, *buf, 0))
	{
		free(*buf);
		return (NULL);
	}
	return (search_or_create_fd(fd, top));
}

/*
** ATTENTION int i
** i[0] = index dans string
** i[1] = val ret du READ
** i[2] = val abritraire à stocker
*/

int				get_next_line(const int fd, char **line)
{
	static t_dlist	*top;
	t_dlist			*cur;
	char			*buf;
	int				i[3];

	i[0] = -1;
	i[2] = 'Z';
	if (!(cur = check(fd, line, &buf, &top)))
		return (-1);
	while ((i[0] + 1) < ((t_fddat *)cur->content)->size_s)
	{
		if (((t_fddat *)cur->content)->s[++i[0]] == '\n' && (i[2] = 'S'))
		{
			free(buf);
			return (loadline_saveremainder(line, &top, i, &cur));
		}
	}
	if (readfd(cur, buf, i))
	{
		free(buf);
		return (loadline_saveremainder(line, &top, i, &cur));
	}
	free(buf);
	return (loadline_saveremainder(line, &top, i, &cur));
}
