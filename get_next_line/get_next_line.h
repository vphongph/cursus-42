/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 23:17:19 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/08 23:48:12 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2147483648

typedef struct	s_fdDat{

	char			*s;
	int 			index_fd;
	int				size_s;
	struct s_fddata	*next;

}				t_fdDat;

#endif
