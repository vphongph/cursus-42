/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 03:07:56 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 03:21:30 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstfree(t_list **alst)
{
	t_list *tmp;

	if (alst)
	{
		while (*alst)
		{
			tmp = *alst;
			*alst = (*alst)->next;
			free(tmp->content);
			free(tmp);
		}
		*alst = NULL;
	}
}
