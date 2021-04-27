NAME = phonebook
SRCS = main.cpp phonebook.cpp contact.cpp

CC = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re