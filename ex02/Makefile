NAME = ex02
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJ = main.cpp Fixed.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING ex02...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./ex02 created\n"

clean :
	$(RM) ex02

fclean : clean
	$(RM) ex02

re : fclean all