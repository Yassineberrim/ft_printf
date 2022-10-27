# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:07:47 by yberrim           #+#    #+#              #
#    Updated: 2022/10/26 19:57:37 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	$(wildcard ft*.c)

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}
	
$(NAME): ${OBJS}
	ar -rc ${NAME} ${OBJS}

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

mtest: $(NAME) main.c
	@gcc main.c $(NAME) -o mtest
	./mtest
	