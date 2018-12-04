/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:25:39 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 23:24:27 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**ATTENTION a bien declarer tmp comme unsigned, sinon mauvais comportement.
*/

void	ft_printbit(unsigned char c)
{
	int				shift;
	unsigned char	tmp;

	shift = 0;
	while (shift < 8)
	{
		tmp = c << shift;
		tmp = tmp >> 7;
		tmp = tmp + '0';
		write(1, &tmp, 1);
		shift++;
	}
}
