/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 00:00:08 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/10 04:18:24 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	ft_putstr("\e[31mlol\n\033[0m");
	ft_putstr("\033[38;5;196mlol\n\033[0m");
	ft_putstr("\033[38;2;255;0;0mlol\n\n\033[0m");

	ft_putstr(ALLIANCE"The Alliance\n"RESET);
	ft_putstr(FEDERATION"The Federation\n"RESET);
	ft_putstr(ASSEMBLY"The Assembly\n"RESET);
	ft_putstr(ORDER"The Order\n\n"RESET);
	ft_putstr(RED"Red\n"RESET);
	ft_putstr(BLUE"Blue\n"RESET);
	ft_putstr(GREEN"Green\n"RESET);
	ft_putstr(YELLOW"Yellow\n"RESET);
	ft_putstr("Blank\n");

	ft_putstr("\u00FF\n");
	ft_putstr("💎\n");
	ft_putstr("💖\n");
	ft_putstr("\uF8FF\n");

	return (0);
}
