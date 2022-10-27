# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:07:47 by yberrim           #+#    #+#              #
#    Updated: 2022/10/27 13:23:34 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_format.c ft_hexapointer.c ft_hexlong.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putnbrposi.c ft_putstr.c 


OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}
	
$(NAME): ${OBJS}
	ar -rc ${NAME} ${OBJS}

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

mtest: $(NAME) main.c
	@gcc main.c $(NAME) -o mtest
	./mtest
	
