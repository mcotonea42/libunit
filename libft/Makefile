# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 11:58:50 by jfabregu          #+#    #+#              #
#    Updated: 2025/10/29 11:58:51 by jfabregu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC_MEM =   ft_memset.c \
		    ft_bzero.c \
		    ft_memcpy.c \
		    ft_memmove.c \
		    ft_memchr.c \
		    ft_memcmp.c \
		    ft_calloc.c

SRC_CHAR =  ft_isalpha.c \
		    ft_isdigit.c \
		    ft_isalnum.c \
		    ft_isascii.c \
		    ft_isprint.c \
		    ft_toupper.c \
		    ft_tolower.c

SRC_STR =   ft_strlen.c \
		    ft_strlcpy.c \
		    ft_strlcat.c \
		    ft_strchr.c \
		    ft_strrchr.c \
		    ft_strncmp.c \
		    ft_strnstr.c \
		    ft_strdup.c

SRC_CONV =  ft_atoi.c \
		    ft_itoa.c

SRC_MANIP = ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c

SRC_FD =	ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

SRC = $(SRC_MEM) $(SRC_CHAR) $(SRC_STR) $(SRC_CONV) $(SRC_MANIP) $(SRC_FD)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re