/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_lstmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 02:49:31 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 03:41:22 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_prout(t_list *lst)
{

	lst->content = NULL;
	lst->content_size = 0;
	return (lst);
}


int		main(void)
{
	t_list *killian1;
	t_list *killian2;
	t_list *killian3;
	t_list *tmp;	

	killian1 = ft_lstnew("Hello", 6);
	killian2 = ft_lstnew("je suis", 8);
	killian3 = ft_lstnew("Kilian", 7);

	killian1->next = killian2;
	killian2->next = killian3;

	tmp = killian1;

	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}

	tmp = ft_lstmap(killian1, ft_prout);

	ft_prout(killian1);
	
	tmp = killian1;

	printf("\n");
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	

	return (0);
}