NAME = push_swap

CC = cc
CFLAGS =-g -Wall -Wextra -Werror -I./includes

SRCDIR = srcs
OBJDIR = obj
LIBPATH = ft_lib/

LIB = -L./ft_lib -lft

RM = rm -rf

SRCS = push_swap.c error_handling.c operations.c operations_a.c operations_b.c sort_list.c radix_sort.c

SRC  = $(addprefix $(SRCDIR)/, $(SRCS))

OBJ  = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBPATH)
	$(CC) $(CFLAGS) $^ $(LIB) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	make clean -C $(LIBPATH)
	$(RM) $(OBJDIR)

fclean: clean
	make fclean -C $(LIBPATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
