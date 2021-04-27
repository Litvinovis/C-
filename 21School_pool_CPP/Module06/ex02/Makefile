NAME = Identify
SRC = A.cpp B.cpp C.cpp Base.cpp main.cpp
OBJ = $(SRC:%.cpp=%.o)

CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all re fclean