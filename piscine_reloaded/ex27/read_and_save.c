/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_save.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 23:32:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*read_file(char *file_name)
{
	int		fb;
	int		ret;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	fb = -1;
	fb = open(file_name, O_RDONLY);
	if (fb == -1)
		return (NULL);
	ret = read(fb, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fb) == -1)
		close(fb);
	return (buf);
}

int		get_line_num(char *str, int *index, int size)
{
	int result;

	result = 0;
	while (str[*index] >= '0' && str[*index] <= '9' && (*index) < size)
		result = result * 10 + (str[(*index)++] - '0');
	return (result);
}

void	read_first_line(t_map *map_o, int *index, char *buf)
{
	int size;

	size = 0;
	while (buf[size] != '\n')
		size++;
	map_o->line = get_line_num(buf, index, size - 3);
	map_o->empty = buf[(*index)++];
	map_o->obstacle = buf[(*index)++];
	map_o->full = buf[(*index)++];
	if (map_o->empty == map_o->obstacle || map_o->empty == map_o->full
	|| map_o->full == map_o->obstacle || buf[(*index)] != '\n')
		map_o->stus = 0;
}

int		get_len_num(char *str, int index)
{
	int result;

	result = 0;
	while (str[index] == '\n')
		index++;
	while (str[index])
	{
		if (str[index] == '\n')
			return (result);
		else
			result++;
		index++;
	}
	return (result);
}

t_map	read_map(char *file_name)
{
	char	*buf;
	int		i;

	INIT_T_MAP(map_o);
	buf = read_file(file_name);
	i = 0;
	if (buf)
	{
		read_first_line(&map_o, &i, buf);
		map_o.len = get_len_num(buf, i);
		generate_map(&map_o);
		if (save_map(&map_o, &i, buf) == 1)
		{
			free(buf);
			map_o.stus = 1;
			return (map_o);
		}
		else
			map_o.stus = 0;
	}
	else
		map_o.stus = 0;
	return (map_o);
}
