# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 21:11:23 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/08 22:14:44 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
