/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 00:14:23 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/30 18:02:04 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list 	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlst;

	if (!(newlst = ft_memalloc(sizeof(t_list))) || !content)
		return (NULL);
	newlst->content = (void *)content;
	newlst->content_size = sizeof(content_size);
	newlst->next = NULL;

	return (newlst);
}