/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:37:00 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/14 22:58:11 by vphongph         ###   ########.fr       */
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
		write(2, "File name missing.\n", 20);
	if (ac > 2)
		write(2, "Too many arguments.\n", 21);
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
/*
** L27 Si fd est <0 c'est que j'ai pas reussi a l'ouvrir, donc pas de close
** L29 Read de 128 octet + lire de return de read
** L33 Bien check si tu reussi a close
*/
