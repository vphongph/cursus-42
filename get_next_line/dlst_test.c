/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:13:03 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/16 03:54:50 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>


void	ft_memdel_test(void **ap)
{
	if (!(ap))
		printf(RED"memdel ap doesn't exist\n"RESET);

	if (ap && *ap)
	{
		printf(BLUE"\nmall before del : %lu\n"RESET,malloc_size(*ap));
		free(*ap);
		*ap = NULL;
		printf(BLUE"mall after del : %lu\n"RESET,malloc_size(*ap));
	}
}

/*
** return 1 = ajouter un nouveau, le top est existant
** return 0 = ajouter le premier, le top est inexistant
*/

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

/*
** ATTENTION **dlst, ça modifie le pointeur, ce n'est pas une copie
** TOUJOURS envoyer en arg un pointeur de tête
** et JAMAIS un dlst->next (pointeurs != => CONFLIT)
*/

void	delstruct(void *content, size_t content_size)
{
	printf(GREEN"DELSTRUCT\n"RESET);
	ft_memdel_test((void *)((t_fdDat *)&content)->s);
	((t_fdDat *)content)->index_fd = 0;
	((t_fdDat *)content)->size_s = 0;
	ft_memdel_test(&content);
	content_size = 0;
}

int		ft_dlstdelone_test(t_dlist **dlst, void (del)(void *, size_t))
{
	t_dlist *tmp;

	if (dlst && *dlst)
	{
		tmp = *dlst;
		if ((*dlst)->prev && (*dlst)->next)
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
			if (del)
				del((*dlst)->content, (*dlst)->content_size);
			while ((*dlst)->prev)
				*dlst = (*dlst)->prev;
			ft_memdel_test((void *)&tmp);
			return (3);
		}
		if ((*dlst)->next)
		{
			printf(YELLOW"\nDEL TOP\n"RESET);
			(*dlst)->next->prev = NULL;
			if (del)
				del((*dlst)->content, (*dlst)->content_size);
			(*dlst) = (*dlst)->next;
			ft_memdel_test((void *)&tmp);
			return (2);
		}
		if ((*dlst)->prev)
		{
			printf(YELLOW"\nDEL END\n"RESET);
			(*dlst)->prev->next = NULL;
			if (del)
				del((*dlst)->content, (*dlst)->content_size);
			while ((*dlst)->prev)
				*dlst = (*dlst)->prev;
			ft_memdel_test((void *)&tmp);
			return (1);
		}
		printf(YELLOW"\nDEL LAST\n"RESET);
		if (del)
			del((*dlst)->content, (*dlst)->content_size);
		ft_memdel_test((void *)dlst);
		return(0);
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}

int		main(void)
{
	t_dlist* top = NULL;
	t_dlist* tmp = NULL;
	t_fdDat	dat;
	int i = 3;

	dat.s = NULL , dat.index_fd = 0 , dat.size_s = 0;


	ft_dlstadd_test(NULL, ft_dlstnew(NULL, 0));
	ft_dlstdelone_test(NULL, NULL);

	while (i < 10)
	{
		dat.index_fd = i++;
		ft_dlstadd_test(&top, ft_dlstnew(&dat, sizeof(t_fdDat)));
		((t_fdDat *)top->content)->s =ft_memalloc(100);
	}

	printf(YELLOW"\nBEFORE DEL\n"RESET);

	i = 0 , tmp = top;
	while (tmp)
	{
		printf(ALLIANCE"floor"RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		tmp = tmp->next;
	}

	i = 0;
	t_dlist *ptr;
	// t_dlist *ptr = top->next->next->next->next->next->next->prev->prev->prev->prev->prev->prev->next;
	ptr = top->next;
	ft_dlstdelone_test(&ptr, delstruct);
	ptr = ptr->next;
	ft_dlstdelone_test(&ptr, delstruct);
	ptr = ptr->next;
	ft_dlstdelone_test(&ptr, delstruct);


	// while (ptr)
		// ft_dlstdelone_test(&ptr, delstruct);

	printf("\nptr = %p\n", ptr);

	printf(YELLOW"\nAFTER DEL\n"RESET);

	top = ptr;

	while (top)
	{
		printf(ALLIANCE"floor"RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)top->content)->index_fd));
		top = top->next;
	}

	return (0);
}



