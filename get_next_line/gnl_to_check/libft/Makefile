# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 21:12:59 by vphongph          #+#    #+#              #
#    Updated: 2019/01/19 18:00:15 by vphongph         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

SRCS	=	ft_memalloc.c		\
			ft_memdel.c			\
			ft_memjoin.c		\
			ft_memjoinfree_l.c	\
			ft_memcpy_v2.c		\
			ft_bzero_v2.c		\
			ft_strsub_v2.c		\
			ft_dlstnew.c		\
			ft_dlstdelone.c		\
			ft_dlstadd.c

OBJS	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		ar r $(NAME) $(OBJS)
		ranlib $(NAME)

clean	:
		/bin/rm -f $(OBJS)

fclean	:	clean
		/bin/rm -f $(NAME)

re		:	fclean all
