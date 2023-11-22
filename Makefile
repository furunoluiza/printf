SRC = ft_printf.c ft_putnbr.c print_char.c print_decimal.c print_lower_x.c \
	  print_pointer.c print_string.c print_upper_x.c ft_utoa.c
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
