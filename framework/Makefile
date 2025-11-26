CC = cc 
CFLAGS = -Wall -Wextra -Werror

NAME = libunit.a

SRCS = load_tests.c \
       launch_tests.c \
       utils.c

OBJS = ${SRCS:.c=.o}

INCLUDES = -I .

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re