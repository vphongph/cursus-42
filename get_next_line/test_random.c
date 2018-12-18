/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_random.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:35:06 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/18 01:51:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		main(void)
{
	char *buf[100];

	int fd = 3;

	char *str = ALLIANCE"0123456789\n"RESET;

	printf("%d", ft_putstr_fd_v2(str, 2));

	printf("%zd", read(fd, buf, 1));

	return (0);
}