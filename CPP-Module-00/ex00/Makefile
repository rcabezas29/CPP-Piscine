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

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): 
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean:
	rm $(NAME)

re:	fclean all

.PHONY: all fclean
