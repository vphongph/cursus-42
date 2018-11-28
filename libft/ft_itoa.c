/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:59:08 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 00:36:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_itoa(int n)
{
	char *str;
	unsigned int nb;
	int len;

	len = 0;
	nb = (unsigned int)n;
	if (n < 0)
		nb = (unsigned int)-n;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	if (!(str = ft_memalloc((len + 1) * sizeof(*str))))
		return (NULL);
	nb = 
}
