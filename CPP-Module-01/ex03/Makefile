NAME = violence

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
