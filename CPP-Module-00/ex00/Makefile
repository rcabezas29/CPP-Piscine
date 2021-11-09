# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/01 14:36:32 by rcabezas          #+#    #+#              #
#    Updated: 2021/05/01 14:36:32 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	clang++ $(CFLAGS) megaphone.cpp -o $(NAME)

fclean:
	rm $(NAME)

re:	fclean all

.PHONY: all fclean
