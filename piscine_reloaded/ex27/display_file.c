/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:37:00 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/15 03:58:33 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	int		fd;
	char	buf[128];
	int		ret;

	if (ac == 1)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (1);
	while ((ret = read(fd, buf, 128)) > 0)
	{
		write(1, buf, ret);
	}
	if (close(fd) != 0)
		return (1);
	return (0);
}
