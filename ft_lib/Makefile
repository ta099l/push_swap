NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

SRC_FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
get_next_line.c get_next_line_utils.c \
ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_puthex.c ft_unsigned_putnbr.c ft_putptr.c

SRC = $(addprefix $(SRCDIR)/, $(SRC_FILES))
OBJ = $(addprefix $(OBJDIR)/, $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
