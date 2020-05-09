# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 13:19:03 by odooms            #+#    #+#              #
#    Updated: 2019/10/02 12:46:30 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sort.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c\
	  makelist.c\
	  push.c\
	  rotate.c\
	  reverse.c\
	  swap.c\
	  error_checking.c

HD = -I push_swap.h

OBJ = push_swap.o\
	  makelist.o\
	  push.o\
	  rotate.o\
	  reverse.o\
	  swap.o\
	  error_checking.o\

LIB = libft.a

SUBDIRS:
	        cd libft && $(MAKE)

SUBDIRS:
	        $(MAKE) -C libft

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC) $(HD) $(LHD) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

.PHONY: clean
