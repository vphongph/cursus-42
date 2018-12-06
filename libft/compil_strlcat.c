/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:34:50 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/06 11:14:22 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	size_t len = 12;
	char src[11] = {'q','w','e','r','t','y','u','i','o','p','\0'};
	char dst[11] = {'0','1','\0','3','4','5','6','7','8','9','\0'};

	char src2[11] = {'q','w','e','r','t','y','u','i','o','p','\0'};
	char dst2[11] = {'0','1','\0','3','4','5','6','7','8','9','\0'};

	printf("strlcat = %lu\n",strlcat(dst, src, len));

	printf("strlcat = %lu\n",ft_strlcat(dst2, src2, len));

	printf(" src = %s ||  dst = %s\n", src, dst);
	printf("src2 = %s || dst2 = %s\n", src2, dst2);

	// write(1,"ZI\n",3);
	// write(1,&dst[9],1);
	// write(1," ",1);
	// write(1,&dst[len],1);
	// write(1," ",1);
	// write(1,&dst[len - 1],1);
	// write(1,"\nZI",3);

	return (0);
}
