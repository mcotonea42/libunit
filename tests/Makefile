NAME = tester

CC = cc 
CFLAGS = -Wall -Wextra -Werror

FRAMEWORK_DIR = ../framework 
FRAMEWORK_LIB = $(FRAMEWORK_DIR)/libunit.a

INCLUDES = -I. -I$(FRAMEWORK_DIR)

SRCS = main.c \
       01_ok/00_launcher.c 01_ok/01_ok_test.c \
       02_ko/00_launcher.c 02_ko/01_ko_test.c \
       03_segv/00_launcher.c 03_segv/01_segv_test.c \
       04_bus/00_launcher.c 04_bus/01_bus_test.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK_LIB)
	$(CC) $(CFLAGS) $(OBJS) -L$(FRAMEWORK_DIR) -lunit -o $(NAME)

$(FRAMEWORK_LIB):
	make -C $(FRAMEWORK_DIR)

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