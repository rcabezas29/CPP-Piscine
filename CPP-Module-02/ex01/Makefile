# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 19:19:41 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/13 16:32:01 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = clang++ --std=c++98

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Fixed.cpp

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