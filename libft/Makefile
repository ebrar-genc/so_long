NAME	= libft
CC 		= gcc
INCLUDE = libft.h
CFLAGS	= -Wall -Wextra -Werror
ARFLAGS	= -rcs
RM		= rm -rf

PARTONE = ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_strlen.c			\
	ft_memset.c			\
	ft_bzero.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_strnstr.c		\
	ft_atoi.c			\
	ft_calloc.c			\
	ft_strdup.c			\

PARTTWO = ft_substr.c			\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_split.c			\
	ft_itoa.c			\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\

BONUS = ft_lstnew.c			\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c			\

OBJPARTONE = $(PARTONE:.c=.o)
OBJPARTTWO = $(PARTTWO:.c=.o)
OBJBONUS = $(BONUS:.c=.o)


all:  MAKE_o $(NAME) 

MAKE_o:
	gcc $(CFLAGS) -c $(PARTONE) -c $(PARTTWO)

$(NAME) : $(PARTONE) $(PARTTWO)
	ar $(ARFLAGS) $(NAME).a $(OBJPARTONE)
	ar $(ARFLAGS) $(NAME).a $(OBJPARTTWO)

%.o: %.c $(INCLUDE)
	$(CC) -c $< -o $@ $(CFLAGS)

bonus: $(OBJBONUS)
	gcc $(CFLAGS) -c $(BONUS)
	ar $(ARFLAGS) $(NAME).a $(OBJBONUS)

clean:
	$(RM) $(OBJPARTONE) $(OBJPARTTWO) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME).a

bonusclean:
	$(RM) $(OBJBONUS)

re: fclean all

.PHONY: all, clean, fclean, re
