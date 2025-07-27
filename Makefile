# Makefile

NAME = phoneBook
SRC = main.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
# -std=c++98