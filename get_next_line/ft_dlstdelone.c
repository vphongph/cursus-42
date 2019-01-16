/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:34:17 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/16 22:42:53 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ATTENTION **dlst, ça modifie le pointeur, ce n'est pas une copie
** TOUJOURS envoyer en arg un pointeur de tête
** et JAMAIS un dlst->next (pointeurs != => CONFLIT)
** 'J' = ascii 74 = DEL JOIN
** 'T' = ascii 84 = DEL TOP
** 'E' = ascii 69 = DEL END
** 'L' = ascii 76 = DEL LAST
*/

static int	delete(t_dlist **tmp, void (*del)(void *, size_t), int c)
{
	if (del)
		del((*tmp)->content, (*tmp)->content_size);
	ft_memdel((void *)&(*tmp)->content);
	ft_memdel((void *)&(*tmp));
	return (c);
}

static void	move(t_dlist **top, int c)
{
	if (c == 'J')
	{
		(*top)->prev->next = (*top)->next;
		(*top)->next->prev = (*top)->prev;
		while ((*top)->prev)
			*top = (*top)->prev;
	}
	if (c == 'T')
	{
		(*top)->next->prev = NULL;
		(*top) = (*top)->next;
	}
	if (c == 'E')
	{
		(*top)->prev->next = NULL;
		while ((*top)->prev)
			*top = (*top)->prev;
	}
}

int			ft_dlstdelone(t_dlist **top, void (*del)(void *, size_t))
{
	t_dlist *tmp;

	if (top && *top)
	{
		tmp = *top;
		if ((*top)->prev && (*top)->next)
		{
			move(top, 'J');
			return (delete(&tmp, del, 'J'));
		}
		if ((*top)->next)
		{
			move(top, 'T');
			return (delete(&tmp, del, 'T'));
		}
		if ((*top)->prev)
		{
			move(top, 'E');
			return (delete(&tmp, del, 'E'));
		}
		return(delete(top, del, 'L'));
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}
