NAME = phoneBook
SRC = main.cpp \
			Contact.cpp \
			phoneBook.cpp
CXX = c++
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(SRC)
				$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re