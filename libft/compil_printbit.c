/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_printbit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:45:34 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 23:38:40 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>


int		main(void)
{
	unsigned char c;

	c = 42;
	// ft_printbit(c);

	c == 42 ? write(1, "a", 1), write(1, "b", 1) : write (1, "c", 1);

	return (0);
}