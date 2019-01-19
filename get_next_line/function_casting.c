/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_casting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:47:11 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 18:50:45 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

void	caca(void)
{
	((void(*)())&printf)();
}

int 	main(void)
{
	/*
	char *lol = malloc(2);
	char *mdr = malloc(2);
	printf("%lu\n", malloc_size(lol));
	printf("%lu\n", malloc_size(mdr));
	blabla(lol, mdr);
	printf("%lu\n", malloc_size(lol));
	printf("%lu\n", malloc_size(mdr));*/
	((void(*)(char *, ...))&caca)("%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p%p\n", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello", "hello");
	return (0);
}
