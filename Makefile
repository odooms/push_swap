# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 13:19:03 by odooms            #+#    #+#              #
#    Updated: 2019/09/13 14:55:53 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c test.c
HD = push_swap.h
LIB = -I libft/libft.a
OBJ = push_swap.o test.o

all: $(NAME)

$(NAME): $(OBJ) $(HD)
	$(CC) $(CFLAGS) $(SRC) $(HD) $(LIB)

//	ar rc $(NAME) $(OBJ)
//	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

.PHONY: clean
