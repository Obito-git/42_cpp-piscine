NAME = zombie
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
OBJ_DIR = obj
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS  := $(%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(CR_DIR) $(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

$(CR_DIR):
		mkdir $(OBJ_DIR)

clean:
	rm -f $(OBJS)
	rm -f $(OBJ_DIR)
	rm -f .*.swp
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
