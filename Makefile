#COMPILER The compiler we want to use
COMPILER = cc
#NAME The name of the executable that we want to create
NAME = libftprintf.a
#DEPS The dependencies that are use by the other files
DEPS = ft_printf.h
#FILES The files that we want to compile
FILES = ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \

#FLAGS The flags we want to use
FLAGS = -Wall -Werror -Wextra
#OBJS 
OBJS = $(FILES:.c=.o)
#AR Ar command and options for the command, 
# ar command is used to create or modified .a files
# r option insert the files into the archive or replace existing files with the same name
# c option create the archive if it does not already exist
# s option creates an index, so the access to the function is fater
AR = ar rcs

# "all" call the $(NAME) target
all: $(NAME)

# Creates the libft.a file with the default functions
$(NAME): $(OBJS)
	$(AR) $@ $^

# Compile the every .c in a .o with the compiler and flags that we define previously, 
# the -c flag indicates that we want to create an object file(.o) but not a executable(.a),
# $< takes the name of the first dependencie, that will be the name of the .c file
# the -o flag indicates that we want give a specific name to the resulting file
# %@ takes the name of the target
%.o: %.c $(DEPS)
	$(COMPILER) $(FLAGS) -c $< -o $@

# "clean" delete the .o files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# "fclean" delete the executable file
fclean:	clean
	rm -f $(NAME)

# "re" delete de executable file and create it again
re: fclean all

# With this line we indicate that all, bonus, clean, fclean and re are commands and not files,
# so every time we call the command it executes no matter if there is a file with that name
.PHONY: all bonus clean fclean re