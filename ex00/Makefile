SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CC = g++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
