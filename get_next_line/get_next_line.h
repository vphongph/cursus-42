/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 23:17:19 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/04 00:35:47 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

typedef struct	s_fddata{

	char			*str;
	int 			index_fd;
	int				size_str;
	struct s_fddata	*next;

}				t_fddata;

#endif
