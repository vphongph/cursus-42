/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 00:20:16 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 01:39:22 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lstnew;
	t_list *tmp;

	tmp = lst;
	if (!lst || !f)
		return (NULL);
	while (tmp)
	{
		if (!(lstnew = ft_memalloc(sizeof(t_list))))
			return (NULL);
		lstnew = f(tmp);
		tmp = tmp->next;
	}
	return (lstnew);
}
