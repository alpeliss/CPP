NAME = convert

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror 

OBJ 		= 	$(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all