/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:34:17 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/14 06:54:55 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dlstdelone(t_dlist **dlst)
{
	t_dlist *tmp;

	tmp = *dlst;
	if (dlst)
	{
		if (*dlst && (*dlst)->prev && (*dlst)->next)
		{
			(*dlst)->prev->next = (*dlst)->next;
			(*dlst)->next->prev = (*dlst)->prev;
			ft_memdel((void *)dlst);
			return (2);
		}
		if (*dlst && (*dlst)->next)
		{
			*dlst = (*dlst)->next;
			ft_memdel((void *)&tmp);
			return (1);
		}
		ft_memdel((void *)dlst);
		return (0);
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}
