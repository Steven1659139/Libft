NAME = libft.a

SRC =  ft_strlen.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_tolower.c \
	  ft_isalpha.c ft_isascii.c ft_toupper.c ft_atoi.c ft_strncmp.c ft_memset.c \
	  ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c \
	  ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
	  ft_strtrim.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_yo_its_wrong.c ft_abs.c ft_atoll.c ft_num_to_base.c ft_print_hex.c \
	  ft_table_flip.c lstadd_dbl.c ft_lstsize_dbl.c get.c lst_addback_dbl.c lstnew_dbl.c check.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

HDRS = libft.h

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME) $(OBJS_BONUS)

re: fclean all

add:
	git add *.c *.h Makefile
	git status
	
test:
	@echo "Le résultat vous convient-il ?"; \
	read AGE;
	YES = y
	ifeq (AGE, YES)
	echo "answer", $${AGE}
