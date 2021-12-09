# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 18:59:08 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/09 19:00:10 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = blackberry

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

SRCS = blackberry.cpp Contact.cpp Phonebook.cpp

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