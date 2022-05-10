NAME = Animals

SRCS = Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -g


OBJ 		= 	$(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@c++ $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

