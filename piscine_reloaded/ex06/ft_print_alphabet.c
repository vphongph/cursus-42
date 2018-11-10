/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:54:44 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/10 03:42:26 by vphongph         ###   ########.fr       */
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
