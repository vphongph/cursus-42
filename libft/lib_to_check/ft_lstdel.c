/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 21:39:28 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/03 23:44:59 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst && del)
	{
		while (*alst)
		{
			tmp = *alst;
			del((*alst)->content, (*alst)->content_size);
			*alst = (*alst)->next;
			free(tmp);
		}
		*alst = NULL;
	}
}
