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
all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	cp $(LIBFT_DIR) .
	$(AR) $@ $^

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) 

%.o: %.c $(DEPS)
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re