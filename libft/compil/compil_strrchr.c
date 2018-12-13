/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:06:44 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/21 20:04:47 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int c = 'q';
	char s[11] = {'q','\0','e','r','t','H','u','i','o','p','\0'};

	printf("   strrchr = %s\n",strrchr(s, c));
	printf("ft_strrchr = %s\n",ft_strrchr(s, c));

	return (0);
}