NAME = blackberry

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

SRCS = blackberry.cpp Contact.cpp Phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re