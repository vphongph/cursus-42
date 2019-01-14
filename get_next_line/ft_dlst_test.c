/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:13:03 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/14 20:14:03 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>


void	ft_memdel_test(void **ap)
{
	if (ap && *ap)
	{
		printf(BLUE"\nmall before del : %lu\n"RESET,malloc_size(*ap));
		free(*ap);
		*ap = NULL;
		printf(BLUE"mall after del : %lu\n"RESET,malloc_size(*ap));
	}
	printf(RED"\amemdel ∅\n"RESET);
}

/*
** return 1 = ajouter un nouveau, le top est existant
** return 0 = ajouter le premier, le top est inexistant
*/

/*
** ATTENTION **dlst, ça modifie le pointeur, ce n'est pas une copie
** TOUJOURS envoyer en arg un pointeur de tête
** et JAMAIS un dlst->next (pointeurs != => CONFLIT)
*/

int		ft_dlstdelone_test(t_dlist **dlst)
{
	t_dlist *tmp;

	if (dlst)
	{
		tmp = *dlst;
		if (*dlst && (*dlst)->prev && (*dlst)->next)
		{
			printf(YELLOW"\nDEL JOIN\n"RESET);
			printf("dlst = %p\n", *dlst);
			printf("dlst prev = %p\n", (*dlst)->prev);
			printf("dlst next = %p\n\n", (*dlst)->next);
			printf("dlst prev next = %p\n", (*dlst)->prev->next);
			(*dlst)->prev->next = (*dlst)->next;
			printf("dlst prev next = %p\n", (*dlst)->prev->next);
			printf("dlst next prev = %p\n", (*dlst)->next->prev);
			(*dlst)->next->prev = (*dlst)->prev;
			printf("dlst next prev = %p\n", (*dlst)->next->prev);

			ft_memdel_test((void *)dlst);
			return (2);
		}
		printf(YELLOW"\nBEFORE DEL TOP\n"RESET);
		if (*dlst && (*dlst)->next)
		{
			printf(YELLOW"\nDEL TOP\n"RESET);
			(*dlst)->next->prev = NULL;
			(*dlst) = (*dlst)->next;
			ft_memdel_test((void *)tmp);
			return (1);
		}
		printf(YELLOW"\nAFTER DEL TOP\n"RESET);
		*dlst ? (*dlst)->prev->next = NULL : *dlst;
		ft_memdel_test((void *)dlst);
		return (0);
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}


int		ft_dlstadd_test(t_dlist **top, t_dlist *new)
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


	ft_dlstadd_test(NULL, ft_dlstnew(NULL, 0));
	ft_dlstdelone_test(NULL);

	while (i < 6)
	{
		dat.index_fd = i++;
		ft_dlstadd_test(&dlst, ft_dlstnew(&dat, sizeof(t_fdDat)));
	}

	printf(YELLOW"\nBEFORE DEL\n"RESET);

	tmp = dlst , i = 0;
	while (tmp)
	{
		printf(ALLIANCE"floor"RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		tmp = tmp->next;
	}

	t_dlist *ptr = dlst;
	ft_dlstdelone_test(&ptr);
	ft_dlstdelone_test(&ptr);
	ft_dlstdelone_test(&ptr);

	printf("ptr = %p\n", ptr);
	printf("dlst = %p\n", dlst);

	printf(YELLOW"\nAFTER DEL\n"RESET);

	tmp = ptr , i = 0;

	while (tmp)
	{
		printf(ALLIANCE"floor"RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		tmp = tmp->next;
	}

	return (0);
}





