NAME = real_tester

CC = cc 
CFLAGS = -Wall -Wextra -Werror

FRAMEWORK_DIR = ../framework
LIBFT_DIR = ../libft 

FRAMEWORK_LIB = $(FRAMEWORK_DIR)/libunit.a
LIBFT_LIB = $(LIBFT_DIR)/libft.a

INCLUDES = -I. -I$(FRAMEWORK_DIR) -I$(LIBFT_DIR)

SRCS = main.c \
       ft_strlen/00_launcher.c ft_strlen/01_basic_test.c ft_strlen/02_null_test.c \
	   ft_atoi/00_launcher.c ft_atoi/01_basic_test.c ft_atoi/02_negative_test.c \
	   ft_atoi/03_zero_test.c ft_atoi/04_max_test.c ft_atoi/05_min_test.c \
	   ft_bzero/00_launcher.c ft_bzero/01_basic_test.c ft_bzero/02_integrity_test.c \
	   ft_bzero/03_zero_len_test.c ft_bzero/04_null_test.c \
	   ft_split/00_launcher.c ft_split/01_basic_test.c ft_split/02_delimiters_test.c ft_split/03_null_test.c ft_split/04_force_crash_test.c

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