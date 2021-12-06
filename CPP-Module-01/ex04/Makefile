# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 17:30:54 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/06 20:39:49 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Replace.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)
	rm -f *.replace

re:	fclean all

.PHONY:	all clean fclean re
