CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ./ft_printf_putchar.c ./ft_printf_putstr.c ./ft_printf_putnbr.c ./ft_printpercent.c ./ft_print_hex.c \
	./ft_print_pointer.c ./ft_print_unsigned.c ./ft_printf.c

NAME = libftprintf.a

AR = ar -rcs

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.PHONY: clean fclean re

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all