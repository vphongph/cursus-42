/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorphongphaysane <victorphongphaysane@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/09 18:34:38 by victorphongphaysane###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
std.h>

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
