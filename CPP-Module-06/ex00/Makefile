# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 12:37:41 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/19 18:53:01 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Convert.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
