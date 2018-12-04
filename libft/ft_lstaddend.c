/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 19:25:41 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 19:27:32 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (*alst && new)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		*alst = new;
		new->next = NULL;
	}
}
