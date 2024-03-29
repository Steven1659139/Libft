/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:04:18 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/29 15:54:04 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

// Couleur

# define RED "\033[0;31m"
# define GREEN "\033[1;32m"
# define BRIGHT_GREEN "\033[1;92m"
# define BOLD "\033[1m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define VIOLET "\033[0;35m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_calloc(size_t count, size_t size);
void		*get_top(t_dlist *stack);
void		table_flip(char **tab);
void		ft_print_hex(unsigned int num);
void		lst_addback_dbl(t_dlist **alst, t_dlist *new);
void		lst_print(t_list **list);
char		*ft_num_to_base(unsigned long long num, int base);
void		yo_its_wrong(char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f) (void *));
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isnum(char c);
int			str_isnum(char *str);
int			is_white_space(char c);
int			ft_isprint(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_lstsize(t_list *lst);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t		ft_lstsize_dbl(t_dlist **first);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
char		**tabcpy(char **src);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *));
t_dlist		*lstlast_dbl(t_dlist **first, t_dlist *lst);
void		lstadd(t_dlist **first, t_dlist *new);
long long	ft_atoll(const char *str);
int			ft_abs(int n);
int			count_str(char **tab);
int			twin_checker_dbl(t_dlist **lst);
void		*get_bottom(t_dlist *stack);
int			int_checker(long long nb);
int			tab_length(char **tab);
char		**tab_join(char **tab, char *line);
void		print_tab(char **tab);
char		**tab_trunc(char **tab, char *str, int len);
char		*search_line(char **tab, char *line);

#endif
