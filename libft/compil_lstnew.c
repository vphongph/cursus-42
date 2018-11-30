/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 00:24:41 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/30 04:17:45 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


int		main(void)
{
	t_list yop;

	char *str = "Hello";

	yop.content = str;
	yop.content_size = sizeof(char);
	yop.next = &yop;

	printf("%p\n", yop.content);
	printf("%lu\n", yop.content_size);
	printf("%p\n\n", yop.next);

	t_list *plop = ft_lstnew(yop.content, yop.content_size);

	// plop->content ==== (*plop).content

	printf("%p\n", plop->content);
	printf("%lu\n", plop->content_size);
	printf("%p\n", plop->next);

	return (0);
}
