NAME = libft.a

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strncmp.c\
		ft_strdup.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c\
		ft_memcpy.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_memmove.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_calloc.c\
		ft_tolower.c \
		ft_toupper.c\

BONUS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		ft_lstmap.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

HEADER = libft.h
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "Done"

%.o: %.c
	@cc $(FLAG) -c $< -o $@

clean:
	@rm -rf $(OBJ) $(BONUS:.c=.o)
	@echo ".o deleted"
fclean: clean
	@rm -rf $(NAME)
	@echo "libft.a deleted"

re: fclean all

bonus:	$(OBJ)	$(BONUS:.c=.o)
		@$(AR) $(NAME) $(OBJ)	$(BONUS:.c=.o)
		@echo "Bonus Done"

.PHONY: all, clean, fclean, re bonus

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS:.c=.o)