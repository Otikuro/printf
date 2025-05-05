COMPILER = cc
NAME = libftprintf.a
DEPS = ft_printf.h
FILES = ft_nbr_to_ascii.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_nbr.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_printf.c \

FLAGS = -Wall -Werror -Wextra
OBJS = $(FILES:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re