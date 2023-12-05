SRCS = ./main.cpp \
	./ClapTrap.cpp \
	./ScavTrap.cpp 

CC = clang++ -g
NAME = ScavTrap

CFLANG = -Wall -Wextra -Werror -std=c++98 
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re