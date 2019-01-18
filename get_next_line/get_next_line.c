/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 02:25:35 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/18 05:09:44 by vphongph         ###   ########.fr       */
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
	printf(RED"ADD"RESET" : %c\n",ft_dlstadd(top, ft_dlstnew(&dat, sizeof(t_fdDat))));
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
	if (cur)
	{
		ft_memdel((void *)&((t_fdDat *)cur->content)->s);
		ft_dlstdelone(&cur, NULL);
		ft_putstr_fd_v2(RED"\aFOR DYLALA\n"RESET, 2);
		*dlst = cur;
	}
	ft_putstr_fd_v2(RED"\aGNL -> check ∅\n"RESET, 2);
	return (NULL);
}

static int		gnl1_0(char **line, t_dlist **dlst, int *i, char *buf, t_dlist **cur)
{
	t_fdDat	*ss;

	ss = ((t_fdDat *)(*cur)->content);
	free(buf);
	if (i[2] == 'Z')
	{
		(i[0] + 1) ? *line = ft_strsub_v2(ss->s, 0, i[0] + 1) : *line;
		(i[0] + 1) ? write(1, *line, i[0] + 2),  ft_putstr_v2(FEDERATION"%\n"RESET): ft_putstr_v2(YELLOW"%\n"RESET);
		ft_memdel((void *)&ss->s);
		ft_dlstdelone(cur, NULL);
		*dlst = *cur;
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
	// ((t_fdDat *)cur->content)->index_fd = fd;
	while ((i[0] + 1) < ((t_fdDat *)cur->content)->size_s)
		if (((t_fdDat *)cur->content)->s[++i[0]] == '\n' && (i[2] = 'S'))
			return (gnl1_0(line, &dlst, i, buf, &cur));
	while ((i[1] = read(((t_fdDat *)cur->content)->index_fd, buf, BUFF_SIZE)))
	{
		((t_fdDat *)cur->content)->s = ft_memjoinfree_l(
			((t_fdDat *)cur->content)->s,buf, ((t_fdDat *)cur->content)->size_s, i[1]);
		((t_fdDat *)cur->content)->size_s += i[1];
		while (i[1] > 0 && ((t_fdDat *)cur->content)->s[++i[0]] != '\n')
			i[1]--;
		if (((t_fdDat *)cur->content)->s[i[0]] == '\n' && (i[2] = 'R'))
			return (gnl1_0(line, &dlst, i, buf, &cur));
	}
	return (gnl1_0(line, &dlst, i, buf, &cur));
}

int				main(int ac, char **av)
{
	int		fd1;
	int		fd2;
	char	*str = NULL;

	if (ac >= 2)
	{
		if ((fd1 = open(av[1], O_RDONLY)) == -1 || (fd2 = open(av[2], O_RDONLY)) == -1)
		{
			ft_putstr_fd_v2(RED"\aOpen failed\n"RESET, 2);
			return (1);
		}
		// while (get_next_line(fd1, &str) > 0)
		// {
		// 	get_next_line(fd1, &str);
		// }
		// printf("%d\n",get_next_line(fd1, &str));
		// free(str);
		// str = NULL;
		printf("%d\n",get_next_line(fd1, &str));
		free(str);
		str = NULL;

		// while (get_next_line(fd2, &str) > 0)
		// {
		// 	free(str);
		// 	str = NULL;
		// }
		// printf("%d\n",get_next_line(fd2, &str));
		// free(str);
		// str = NULL;
		printf("%d\n",get_next_line(fd2, &str));
		free(str);
		str = NULL;

		printf("%d\n",get_next_line(fd1, &str));
		free(str);
		str = NULL;

		printf("%d\n",get_next_line(fd2, &str));
		free(str);
		str = NULL;



		if (close(fd1) == -1 || close(fd2) == -1)
		{
			ft_putstr_fd_v2(RED"\aClose failed\n"RESET, 2);
			return (1);
		}
	}
	// else
	// {
	// 	while (get_next_line(fd, &str))
	// 	{}
	// }

	// sleep(3);

	return (0);
}
