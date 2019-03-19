/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:47:37 by vphongph          #+#    #+#             */
/*   Updated: 2019/03/19 17:50:20 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

int croissant(int a, int b)
{
	 return (a <= b);
}

t_list	*sort_list3(t_list *lst, int (*cmp)(int, int))
{

	t_list *head = lst;
	t_list *current = lst->next;

		if (current->next && !cmp(head->data, current->data))
		{
			printf("ICI\n");
			head->next = current->next;
			current->next = head;
			head = current;
			current = current->next->next;
		}
		if (!cmp(head->data, current->data))
		{
			printf("LA\n");
			head->next->next = current->next;
			current->next = head;
			head = current;
			current = current->next->next->next;
		}
		if (!cmp(head->data, current->data))
		{
			printf("ENCORE\n");
			head->next->next->next = current->next;
			current->next = head;
			head = current;
			current = current->next->next->next->next;
		}

	return (head);
}

t_list	*sort_list2(t_list *lst, int (*cmp)(int, int))
{
	t_list superhead;
	superhead.next = lst;

	t_list *previous = 0;
	t_list *tmp = 0;

	t_list *current = lst;

	while (current)
	{
		if (current->next && cmp(current->data, current->next->data))
		{
			previous = current;
			current = current->next;
		}
		else if (current->next && !cmp(current->data, current->next->data))
		{
			tmp = current->next;
			current->next = current->next->next;
			tmp->next = current;
			if (previous)
				previous->next = tmp;
			else
				superhead.next = tmp;
			current = superhead.next;
		}
		else
			current = current->next;
	}
	return (superhead.next);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head = lst;
	t_list	*current = lst;
	int 	tmp;

	while (current)
	{
		if (current->next && !cmp(current->data, current->next->data))
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = head;
		}
		else
			current = current->next;
	}
	return (head);
}


int		main(void)
{
	t_list node_a;
	t_list node_b;
	t_list node_c;
	t_list node_d;

	t_list* to_sort = &node_a;


	node_a.data = 3;
	node_b.data = 2;
	node_c.data = 1;
	node_d.data = 0;

	node_a.next = &node_b;
	node_b.next = &node_c;
	node_c.next = &node_d;
	node_d.next = 0;

	while (to_sort)
	{
		printf("%d\n", to_sort->data);
		to_sort = to_sort->next;
	}

	to_sort =  sort_list3(&node_a, croissant);

	printf("\n");

	while (to_sort)
	{
		printf("%d\n", to_sort->data);
		to_sort = to_sort->next;
	}

	return 0;
}
