/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:13:03 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/14 07:14:54 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

#include <malloc/malloc.h>


/*
** return 1 = ajouter un nouveau, le top est existant
** return 0 = ajouter le premier, le top est inexistant
*/

int		ft_dlstdelone_test(t_dlist **dlst)
{
	t_dlist *tmp;

	tmp = *dlst;
	if (dlst)
	{
		if (*dlst && (*dlst)->prev && (*dlst)->next)
		{
			printf("dlst next prev = %p\n", (*dlst)->next->prev);
			printf("\ndlst = %p\n", (*dlst)->prev->next);
			printf("dlst prev next = %p\n", (*dlst)->prev->next);
			printf("dlst next = %p\n", (*dlst)->next);

			(*dlst)->prev->next = (*dlst)->next;
			printf("dlst next = %p\n", (*dlst)->next);
			printf("dlst prev next = %p\n", (*dlst)->prev->next);
			// printf("dlst next prev = %p\n", (*dlst)->next->prev);
			ft_memdel((void *)dlst);
			return (2);
		}
		if (*dlst && (*dlst)->next)
		{
			*dlst = (*dlst)->next;
			ft_memdel((void *)&tmp);
			return (1);
		}
		ft_memdel((void *)dlst);
		return (0);
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}


int		ft_dlstadd(t_dlist **top, t_dlist *new)
{
	if (top)
		printf("\n\ntop = %p\n", *top);

	if (top && *top)
	{
		printf("top prev = %p\n", (*top)->prev);
		printf("top next = %p\n", (*top)->next);
	}

	if (top && *top && new)
	{
		printf(YELLOW"ADDITION\n"RESET);
		new->next = *top;
		(*top)->prev = new;
		printf("ex top next = %p\n", (*top)->next);
		printf("ex top prev = %p\n", (*top)->prev);
		*top = new;

		printf("new top = %p\n", *top);
		printf("new prev = %p\n", new->prev);
		printf("new next = %p\n", new->next);
		return (1);
	}
	if (top && new)
	{
		printf(YELLOW"CREATION\n"RESET);
		new->next = *top;
		*top = new;
		printf("new top = %p\n", *top);
		printf("new prev = %p\n", new->prev);
		printf("new next = %p\n", new->next);
		return (0);
	}
	ft_putstr_fd_v2(RED"\adlstadd ∅\n"RESET, 2);
	return (-1);
}

int		main(void)
{
	t_dlist* dlst = NULL;
	t_dlist* tmp = NULL;
	t_fdDat	dat;
	int i = 3;

	dat.s = NULL , dat.index_fd = 0 , dat.size_s = 0;


	ft_dlstadd(NULL, ft_dlstnew(NULL, 0));

	while (i < 6)
	{
		dat.index_fd = i++;
		ft_dlstadd(&dlst, ft_dlstnew(&dat, sizeof(t_fdDat)));
	}

	printf(YELLOW"\nBEFORE DEL\n"RESET);

	tmp = dlst , i = 0;
	while (tmp)
	{
		printf(ALLIANCE"floor"RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		tmp = tmp->next;
	}

	// tmp = dlst , i = 0;

	printf("\ndlstdel = %d\n",ft_dlstdelone_test(&dlst->next));
	printf(YELLOW"\nAFTER DEL\n"RESET);

	// tmp = dlst , i = 0;

	// while (tmp)
	// {
	// 	printf(ALLIANCE"floor"RESET" : %d\n", i--);
	// 	printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
	// 	tmp = tmp->next;
	// }

	return (0);
}





