# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 11:31:43 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/13 13:53:56 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX = clang++ --std=c++98

CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
