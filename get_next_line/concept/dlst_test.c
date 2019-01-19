/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:13:03 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/17 14:38:21 by vphongph         ###   ########.fr       */
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
		printf("\ntop = %p\n", *top);

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
		printf("new next = %p\n\n", new->next);
		return (1);
	}
	if (top && new)
	{
		printf(YELLOW"CREATION\n"RESET);
		new->next = *top;
		*top = new;
		printf("new top = %p\n", *top);
		printf("new prev = %p\n", new->prev);
		printf("new next = %p\n\n", new->next);
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
	content_size = 0;
}

int		ft_dlstdelone_test(t_dlist **top, void (*del)(void *, size_t))
{
	t_dlist *tmp;

	if (top && *top)
	{
		tmp = *top;
		if ((*top)->prev && (*top)->next)
		{
			printf(YELLOW"\nDEL JOIN\n"RESET);
			printf("top = %p\n", *top);
			printf("top prev = %p\n", (*top)->prev);
			printf("top next = %p\n\n", (*top)->next);
			printf("top prev next = %p\n", (*top)->prev->next);
			(*top)->prev->next = (*top)->next;
			printf("top prev next = %p\n", (*top)->prev->next);
			printf("top next prev = %p\n", (*top)->next->prev);
			(*top)->next->prev = (*top)->prev;
			printf("top next prev = %p\n", (*top)->next->prev);
			while ((*top)->prev)
				*top = (*top)->prev;
			if (del)
				del(tmp->content, tmp->content_size);
			ft_memdel_test((void *)&tmp->content);
			ft_memdel_test((void *)&tmp);
			return (3);
		}
		if ((*top)->next)
		{
			printf(YELLOW"\nDEL TOP\n"RESET);
			(*top)->next->prev = NULL;
			(*top) = (*top)->next;
			if (del)
				del(tmp->content, tmp->content_size);
			ft_memdel_test((void *)&tmp->content);
			ft_memdel_test((void *)&tmp);
			return (2);
		}
		if ((*top)->prev)
		{
			printf(YELLOW"\nDEL END\n"RESET);
			(*top)->prev->next = NULL;
			while ((*top)->prev)
				*top = (*top)->prev;
			if (del)
				del(tmp->content, tmp->content_size);
			ft_memdel_test((void *)&tmp->content);
			ft_memdel_test((void *)&tmp);
			return (1);
		}
		printf(YELLOW"\nDEL LAST\n"RESET);
		if (del)
			del((*top)->content, (*top)->content_size);
		ft_memdel_test((void *)&(*top)->content);
		ft_memdel_test((void *)top);
		return(0);
	}
	ft_putstr_fd_v2(RED"\adlstdelone ∅\n"RESET, 2);
	return (-1);
}

t_dlist	*searchfd(t_dlist *top, int fd)
{
	while (top)
	{
		if (((t_fdDat *)top->content)->index_fd == fd)
			return (top);
		top = top->next;
	}
	return (NULL);
}

int		ft_dlstadd(t_dlist **top, t_dlist *new);

int		ft_dlstdelone(t_dlist **top, void (*del)(void *, size_t));

int		main(void)
{
	t_dlist* top = NULL;
	t_dlist* tmp = NULL;
	t_fdDat	dat;
	int i = 3;
	int j = 32;

	dat.s = NULL , dat.index_fd = 0 , dat.size_s = 0;


	ft_dlstadd(NULL, ft_dlstnew(NULL, 0));
	ft_dlstadd(NULL, NULL);
	ft_dlstdelone(NULL, NULL);
	ft_dlstdelone(&top, NULL);

	while (i < 10)
	{
		dat.index_fd = i++;
		printf("add : %c\n",ft_dlstadd(&top, ft_dlstnew(&dat, sizeof(t_fdDat))));
		((t_fdDat *)top->content)->s = ft_memalloc(j += 16);
	}

	printf(YELLOW"\nBEFORE DEL\n"RESET);

	i = 0 , tmp = top;
	while (tmp)
	{
		printf(ALLIANCE"==floor=="RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		printf(PINK"mal s"RESET" : %lu\n"RESET,malloc_size(((t_fdDat *)tmp->content)->s));
		tmp = tmp->next;
	}

	i = 0;
	t_dlist *ptr;
	ptr = top->next->next->next->next->next->next->prev->prev->prev->prev->prev->prev->next;
	// ptr = top->next->next->next->next->next->next;
	// ptr = top->next;
	// ptr = top;
	printf("delone : %c\n", ft_dlstdelone(&ptr, delstruct));
	ptr = ptr->next;
	printf("delone : %c\n", ft_dlstdelone(&ptr, delstruct));
	// ptr = ptr->next;
	printf("delone : %c\n", ft_dlstdelone(&ptr, delstruct));



	// while (ptr)
		// printf("delone : %c\n", ft_dlstdelone(&ptr, delstruct));
		// ft_dlstdelone(&ptr, NULL);

	printf("\nptr = %p\n", ptr);

	printf(YELLOW"\nAFTER DEL\n"RESET);

	tmp = ptr;

	while (tmp)
	{
		printf(ALLIANCE"==floor=="RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)tmp->content)->index_fd));
		printf(PINK"mal s"RESET" : %lu\n"RESET,malloc_size(((t_fdDat *)tmp->content)->s));
		tmp = tmp->next;
	}

	int fd = 6;
	tmp = searchfd(ptr, fd);

	printf(YELLOW"\nSEARCH\n"RESET"%p\n\n", tmp);
	if (tmp)
	{
		printf(ALLIANCE"fd found"RESET" : %d\n",((t_fdDat *)tmp->content)->index_fd);
		printf(PINK"mal s"RESET" : %lu\n\n"RESET,malloc_size(((t_fdDat *)tmp->content)->s));
	}
	else
	{
		printf("add : %c\n",ft_dlstadd(&ptr, ft_dlstnew(&dat, sizeof(t_fdDat))));
		((t_fdDat *)ptr->content)->index_fd = fd;
		((t_fdDat *)ptr->content)->s = ft_memalloc(160);

	}

	i = 0;
	printf(YELLOW"FINAL\n"RESET);
	while (ptr)
	{
		printf(ALLIANCE"==floor=="RESET" : %d\n", i--);
		printf(ORDER"fd"RESET" : %d\n",(((t_fdDat *)ptr->content)->index_fd));
		printf(PINK"mal s"RESET" : %lu\n"RESET,malloc_size(((t_fdDat *)ptr->content)->s));
		ptr = ptr->next;
	}

	return (0);
}



