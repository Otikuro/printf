COMPILER = cc
NAME = libftprintf.a
DEPS = ft_printf.h
FILES = ft_print_char.c \
		ft_print_nbr.c \
		ft_print_str.c \
		ft_printf.c \

FLAGS = -Wall -Werror -Wextra
OBJS = $(FILES:.c=.o)
LIBFT_DIR = libft
LIBFT_ROUTE = $(LIBFT_DIR)/libft.a
AR = ar rcs

# "all" call the $(NAME) target
all: $(NAME)

$(NAME): $(LIBFT_ROUTE) $(OBJS)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT_ROUTE):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(COMPILER) $(FLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re