/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 00:20:16 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 20:16:55 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *add;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(newlst = ft_memalloc(sizeof(t_list))))
			return (NULL);
		if (!(newlst->content = ft_memalloc(lst->content_size)))
		{
			free(newlst);
			return (NULL);
		}
		add = f(lst);
		ft_lstaddend(&newlst, add);
		lst = lst->next;
	}
	return (newlst);
}
