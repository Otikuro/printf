COMPILER = cc
FLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
FILES = src/default/ft_nbr_to_ascii.c \
		src/default/ft_print_char.c \
		src/default/ft_print_hex.c \
		src/default/ft_print_nbr.c \
		src/default/ft_print_ptr.c \
		src/default/ft_print_str.c \
		src/default/ft_printf.c \

FILES_BONUS = src/bonus/ft_print_nbr_bonus.c \
			src/bonus/ft_printf_bonus.c \
			src/default/ft_nbr_to_ascii.c \
			src/default/ft_print_char.c \
			src/default/ft_print_hex.c \
			src/default/ft_print_ptr.c \
			src/default/ft_print_str.c \

OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

bonus: fclean $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re