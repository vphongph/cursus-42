/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_casting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:47:11 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/20 21:09:56 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>

void	caca(void)
{
	((void(*)())printf)();
}

void	caca2(char *a, ...)
{
	int i = 0;
	((void(*)())printf)();
	(void)a;
	printf("%d\n",((int(*)(int))free)(i));

}

char *cast_of_free(void)
{
	char *s;

	s = malloc(64);
	printf("%d\n", (((int(*)(char *))free)(s)));
	// s = NULL;
	s = malloc(0);
	printf("%d\n", ((int(*)(char *))free)(s));
	s = malloc(0);
	printf("%d\n", ((int(*)(char *))free)(s));
	s = malloc(10);
	// s = NULL;
	// printf("%d\n", ((int(*)(char *))free)(s));
	// s = NULL;
	return (s);
}

int		ft_myfree(char *s)
{
	return(((char(*)(char *))free)(s));
}

/*
**char *lol = malloc(2);
**char *mdr = malloc(2);
**printf("%lu\n", malloc_size(lol));
**printf("%lu\n", malloc_size(mdr));
**blabla(lol, mdr);
**printf("%lu\n", malloc_size(lol));
**printf("%lu\n", malloc_size(mdr));
*/

int		main(void)
{
	// char *s = malloc(100);
	char *s = NULL;
	// int i = 0;
	((void(*)(char *, ...))caca)("%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n",
		"hello", "hello", "hello", "hello");
	caca2("%s\n", caca);
	s = cast_of_free();
	// s = NULL;
	printf("%d\n",ft_myfree(s));
	// printf("%d\n",((int(*)(char *))free)(s));
	return (0);
}
