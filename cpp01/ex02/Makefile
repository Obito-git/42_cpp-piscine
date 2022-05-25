NAME = addrAndValues
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
OBJ/OBJECTS		=	$(patsubst %.cpp, obj/%.o, $(SRCS))

all: $(NAME)
	
obj/%.o: %.cpp Makefile | obj
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ/OBJECTS)
	$(CC) -o $(NAME) $^ $(CFLAGS)

obj:
	mkdir obj

clean:
	rm -rf obj
	rm -f .*.swp
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
