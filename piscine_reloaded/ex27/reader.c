/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 23:26:11 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_compare1(char *size, char *str);
int		ft_compare2(char *size, char *str, int displayed);
char	*ft_size(char *str);

char	*ft_cat(char *str, char *buf)
{
	char	*dupli;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(dupli = (char*)malloc(sizeof(char) * len + BUF_SIZE + 1)))
		return (NULL);
	dupli[len + BUF_SIZE] = '\0';
	i = -1;
	while (++i < len)
		dupli[i] = str[i];
	i = -1;
	while (++i < BUF_SIZE)
	{
		dupli[len] = buf[i];
		len++;
	}
	return (dupli);
}

int		main(void)
{
	char *buf;
	char *str;

	if (!(buf = (char*)malloc(sizeof(char))))
		return (0);
	if (!(str = (char*)malloc(sizeof(char) + 1)))
		return (0);
	str[1] = '\0';
	while (read(0, buf, BUF_SIZE))
		str = ft_cat(str, buf);
	if (!(ft_size(str)) || ft_compare1(ft_size(str), str) == 1)
	{
		write(1, "aucune", 6);
		return (0);
	}
	free(str);
	return (0);
}
