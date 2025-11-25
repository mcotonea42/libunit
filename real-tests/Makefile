NAME = real_tester

CC = cc 
CFLAGS = -Wall -Wextra -Werror

FRAMEWORK_DIR = ../framework
LIBFT_DIR = ../libft 

FRAMEWORK_LIB = $(FRAMEWORK_DIR)/libunit.a
LIBFT_LIB = $(LIBFT_DIR)/libft.a

INCLUDES = -I. -I$(FRAMEWORK_DIR) -I$(LIBFT_DIR)

SRCS = main.c \
       ft_strlen/00_launcher.c \
       ft_strlen/01_basic_test.c \
       ft_strlen/02_null_test.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK_LIB) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) -L$(FRAMEWORK_DIR) -lunit -L$(LIBFT_DIR) -lft -o $(NAME)

$(FRAMEWORK_LIB):
	make -C $(FRAMEWORK_DIR)

$(LIBFT_LIB):
	make -C $(LIBFT_DIR)

test: all
	./$(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test