/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:34:52 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 18:37:08 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_revint(int n)
{
	size_t			rev;
	unsigned int	nb;

	rev = 0;
	if (n < 0)
		nb = (unsigned int)-n;
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		rev = rev * 10 + nb % 10;
		nb = nb / 10;
	}
	return (rev);
}
