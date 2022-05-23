#include "libft.h"

t_dlist	*lstlast_dbl(t_dlist **first, t_dlist *lst)
{
	if (!lst)
		return (0);
	if (lst -> next == *first)
		return (lst);
	while (lst -> next != *first)
		lst = lst -> next;
	return (lst);
}