/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 00:14:23 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/16 18:35:48 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_dlist	*ft_dlstnew(void *content, size_t content_size)
{
	t_dlist *newlst;

	if (!(newlst = (t_dlist *)ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	if (!content)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		if (!(newlst->content = ft_memalloc(content_size)))
		{
			free(newlst);
			return (NULL);
		}
		ft_memcpy_v2(newlst->content, content, content_size);
		newlst->content_size = content_size;
	}
	newlst->prev = NULL;
	newlst->next = NULL;
	return (newlst);
}
