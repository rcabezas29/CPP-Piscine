# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 20:15:03 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/11 10:05:45 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp ClapTrap.cpp

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
