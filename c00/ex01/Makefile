NAME = ex1
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

clean:
	rm -f $(OBJS)
	rm -f .*.swp
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
