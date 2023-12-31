SRC = ft_printf.c ft_utoa.c ft_strchr.c\
	print_char.c print_string.c print_pointer.c \
	print_signed_decimal.c print_unsigned_decimal.c \
	print_lower_hex.c print_upper_hex.c
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -rf
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(ARC) $(NAME) $(OBJ)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
