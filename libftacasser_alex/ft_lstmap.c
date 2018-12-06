/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 00:20:16 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 03:19:53 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *add;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		add = f(lst);
		if (ft_lstaddend(&newlst, add->content, add->content_size) == 1)
			ft_lstfree(&newlst);
		lst = lst->next;
	}
	return (newlst);
}
