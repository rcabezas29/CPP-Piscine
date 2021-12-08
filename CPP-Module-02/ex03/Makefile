# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 11:49:17 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/08 22:19:57 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Point.cpp Fixed.cpp bsp.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
