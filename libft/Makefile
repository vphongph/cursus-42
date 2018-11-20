# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 21:12:59 by vphongph          #+#    #+#              #
#    Updated: 2018/11/20 16:22:39 by vphongph         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

SRC		= 	ft_memset.c	\
			ft_bzero.c	\
			ft_memcpy.c	\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c	\
			ft_memcmp.c	\
			ft_strlen.c	\
			ft_strdup.c	\
			ft_strcpy.c	\
			ft_strncpy.c

OBJECTS	= 	$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar r $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o : %.c
	gcc -I. -o $@ -c $? -Wall -Wextra -Werror

clean :
	/bin/rm -f $(OBJECTS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all