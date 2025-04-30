#COMPILER The compiler we want to use
COMPILER = cc
#NAME The name of the executable that we want to create
NAME = libft.a
#DEPS The dependencies that are use by the other files
DEPS = libft.h
#FILES The files that we want to compile
FILES = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
#BONUS_FILES The bonus files
BONUS_FILES =	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
#FLAGS The flags we want to use
FLAGS = -Wall -Werror -Wextra
#OBJS 
OBJS = $(FILES:.c=.o)
#BONUS_OBJS
BONUS_OBJS = $(BONUS_FILES:.c=.o)
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

# Creates the default executable an adss the bonus fuctions to it
bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $^

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