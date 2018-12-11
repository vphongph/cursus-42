/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:37:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/11 00:46:49 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
# include <unistd.h>

int get_next_line(const int fd, char **line)
{
	char *buf;
	int ret;

	buf = ft_memalloc(BUF_SIZE);
	ret = read(fd, buf, BUF_SIZE);

	while(*buf != '\n')
		buf++;
	*line = buf;
	ft_strjoin
	return (0);
}

int		main(int ac, char** av)
{
	int fd;

	if (ac == 1)
		ft_putstr(RED"\aNo argument in main"RESET);
		return (1);

	if ((fd = open(av[1], O_RDONLY)) == -1)
		ft_putstr(RED"\aOpen failed"RESET);
		return (1);

	if (close(fd) == -1)
		ft_putstr(RED"\aClose failed"RESET);
		return (1);

	return (0);
}