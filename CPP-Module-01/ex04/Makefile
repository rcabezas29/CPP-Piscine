# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 17:30:54 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/13 13:54:01 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CXX = clang++ --std=c++98

CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Replace.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)
	rm -f *.replace

re:	fclean all

.PHONY:	all clean fclean re
