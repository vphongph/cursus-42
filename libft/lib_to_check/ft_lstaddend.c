/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 19:25:41 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 13:18:02 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstaddend(t_list **alst, void *content, size_t content_size)
{
	t_list *new;
	t_list *tmp;

	if (!alst || !(new = ft_lstnew(content, content_size)))
		return (1);
	tmp = *alst;
	if (*alst)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*alst = new;
	return (0);
}
