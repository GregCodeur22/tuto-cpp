NAME = Polymorphism
SRC = main.cpp \
			Character.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			MateriaSource.cpp
			
OBJ = $(SRC:.cpp=.o)
			
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re