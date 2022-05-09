NAME = Materia

SRCS = Materia.cpp Character.cpp Source.cpp main.cpp

FLAGS = -Wall -Wextra -Werror


OBJ 		= 	$(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@c++ $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

