/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:34:52 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 22:45:40 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ATTENTION, le choix du pointeur entrée doit être judicieux.
** Dans le cas de putnbr, OK car il écrase une copie de n.
** Mais ATTENTION dans un main ou programme.
*/

size_t	ft_revint(int n, int *nzero)
{
	size_t			rev;
	unsigned int	nb;

	rev = 0;
	if (n < 0)
		nb = (unsigned int)-n;
	else
		nb = (unsigned int)n;
	*nzero = 0;
	while (nb > 0)
	{
		rev = rev * 10 + nb % 10;
		if (rev == 0)
			(*nzero)++;
		nb = nb / 10;
	}
	return (rev);
}
