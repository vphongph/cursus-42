/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 00:23:45 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/28 00:35:46 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char *s = NULL;
	// char *str;

	// str = s;
	// str = (char *)&s;

	// str++;

	ft_strtrim(s);

	printf("%s\n", s);
	// printf("%s\n", str);



	return (0);
}