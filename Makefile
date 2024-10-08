NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror -L./mlx -lmlx -framework AppKit -framework OpenGL -g
SRCS = main.c \
	checkmap.c \
	valid_map.c \
	createmaps.c \
	move.c		\
	readfile.c	\

# colors for printing
Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

OBJS= $(SRCS:.c=.o)
PRIN = ./ft_printf/libftprintf.a
LIBFT = ./libft/libft.a
MINI = ./mlx/libmlx.a
RED = '\033[0;31m'
all: $(PRIN) $(LIBFT) ${NAME}
$(PRIN):
	@make -C ./ft_printf

$(LIBFT):
	@make -C ./libft

$(MINI):
	@make -C ./mlx

$(NAME): $(OBJS) $(MINI) $(PRIN) $(LIBFT) 
	@$(CC) ${CFLAGS} $(OBJS) -o $(NAME) $(PRIN) $(LIBFT)
	@echo "\033[1;96mCreating Game\033[1;96m"

%.o: %.c
	@echo $(R)Complining [$<]
	@${CC} -c $^ -o $@ -Wall -Werror -Wextra

clean:
	@rm -rf ${OBJS}
	@echo $(R)Removed [$(OBJS)]$(B)
	@make clean -C ft_printf/
	@make clean -C mlx/

fclean: clean
	@rm -rf ${NAME}
	@echo $(R)Removed [$(NAME)]$(B)
	@make fclean -C ft_printf/
	@make fclean -C mlx/

re: fclean all

.PHONY: fclean re all clean
