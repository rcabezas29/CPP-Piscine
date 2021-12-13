# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 07:05:11 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/13 13:53:47 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CXX = clang++ --std=c++98

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

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
