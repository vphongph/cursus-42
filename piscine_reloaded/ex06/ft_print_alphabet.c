/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:34:38 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/10 01:58:09 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet()
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int	main()
{
	ft_print_alphabet();

	return(0);
}
