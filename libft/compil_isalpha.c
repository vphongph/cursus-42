/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:47:57 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/22 19:11:27 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>


int		main(void)
{
	int c = 353;

	printf("   isalpha = %d\n", isalpha(c));
	printf("ft_isalpha = %d\n", ft_isalpha(c));

	return (0);
}