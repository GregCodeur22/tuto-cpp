NAME = Polymorphism
SRC = main.cpp \
			Animal.cpp\
			Brain.cpp \
			Dog.cpp \
			Cat.cpp

			
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