# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 13:19:03 by odooms            #+#    #+#              #
#    Updated: 2019/08/30 14:24:46 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c
HD = push_swap.h
LIB = -I libft/libft.a
OBJ = push_swap.o


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(HD) $(LIB)
//	ar rc $(NAME) $(OBJ)
//	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

.PHONY: clean
