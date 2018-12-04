/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 00:20:16 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 03:45:35 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (tmp && new)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		printf("lol4\n");
	}
	else
	{
		*alst = new;
		printf("lol3\n");
	}
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *tmp;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		tmp = f(lst);
		ft_lstaddend(&newlst, tmp);
		lst = lst->next;
		printf("lol5\n");
	}
	printf("lol6\n");
	return (newlst);
}
