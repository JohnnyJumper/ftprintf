# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/23 18:19:55 by jtahirov          #+#    #+#              #
#    Updated: 2017/11/21 21:07:57 by jtahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar
ARFLAGS = rc
HFILE = .
SRC = $(wildcard *.c)
LIBFT_SRC = $(wildcard ./libft/*.c)
OBJECTS = *.o
LIBFT_OBJECT = $(LIBFT_SRC:.c=.o)

all: $(NAME)

$(NAME): libftcreate
	@echo "\033[1;31mLife for Ner'zhul! \033[0m"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HFILE)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJECTS) $(LIBFT_OBJECT)
	@ranlib $(NAME)
	@echo "\033[0;33mJob's done \033[0m"

libftcreate: 
	@+$(MAKE) -C ./libft

libftclean:
	@+$(MAKE) clean -C ./libft

libftfclean:
	@+$(MAKE) fclean -C ./libft

clean: libftclean
	@echo "\033[0;36mReady to serve... \033[0m"
	@/bin/rm -f $(OBJECTS)
	@echo "\033[0;33mCleanings done \033[0m"

fclean: clean libftfclean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(OUTPUT)

re: fclean all
