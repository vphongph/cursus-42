/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:59:08 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/29 01:51:55 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	unsigned int nb;
	int tmp;
	int len;

	len = 0;
	tmp = n;
	if (n == 0)
		return ("0");
	while (tmp != 0)
	{
		tmp = tmp / 10;
		len++;
	}
	if (n < 0)
	{
		if (!(str = ft_memalloc((len + 2) * sizeof(*str))))
			return (NULL);
		nb = (unsigned int)-n;
		str[0] = '-';
		len++;
	}
	else
	{
		if (!(str = ft_memalloc((len + 1) * sizeof(*str))))
			return (NULL);
		nb = (unsigned int)n;
	} 
	while (len > 0 && nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
