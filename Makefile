NAME = libft.a

SRC =     $(IT_IS_WHAT_IT_IS) $(STR) $(TAB) $(LIST) $(PRINT) $(GNL) \
	    ft_atoi.c  ft_memset.c \
	  ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c  \
	    ft_calloc.c  \
	    ft_yo_its_wrong.c ft_abs.c ft_atoll.c ft_num_to_base.c  \
	    get.c  check.c  count.c \
	  
IT_IS_WHAT_IT_IS = it_is_what_it_is/ft_isdigit.c it_is_what_it_is/ft_isalnum.c \
					it_is_what_it_is/ft_isprint.c it_is_what_it_is/ft_isalpha.c it_is_what_it_is/ft_isascii.c it_is_what_it_is/is_white_space.c

STR = str/ft_strlen.c str/ft_tolower.c str/ft_toupper.c str/ft_strncmp.c str/ft_strchr.c str/ft_strdup.c str/ft_substr.c \
	str/ft_strtrim.c str/ft_strjoin.c str/ft_split.c str/ft_itoa.c str/ft_strmapi.c str/ft_strrchr.c str/ft_strlcat.c str/ft_strlcpy.c str/ft_strnstr.c

TAB = tab/ft_table_flip.c tab/ft_tab.c tab/search_line.c

LIST = list/lst_add.c list/lstnew_dbl.c  list/ft_lstsize_dbl.c list/ft_lstnew.c  \
		list/ft_lstsize.c list/ft_lstlast.c list/lst_del.c list/ft_lstiter.c list/ft_lstmap.c list/lstlast_dbl.c 

GNL = ./get_next_line/get_next_line_utils.c ./get_next_line/get_next_line.c

PRINT = print/ft_putnbr_fd.c print/ft_putendl_fd.c print/ft_print_hex.c print/ft_putstr_fd.c print/ft_putchar_fd.c print/lst_print.c


OBJS = $(SRC:.c=.o)


HDRS = libft.h

CFLAGS = -Wall -Werror -Wextra -g

CC = @gcc

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

add: fclean
	@git add *
	@git status
push:
	@git push origin master