# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 21:11:23 by rcabezas          #+#    #+#              #
#    Updated: 2021/11/24 21:11:47 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
