NAME = violence
SRC = main.cpp \
			Weapon.cpp \
			HumainA.cpp\
			HumainB.cpp
CXX = c++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
