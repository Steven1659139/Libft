#include "libft.h"

void	lst_addback_dbl(t_dlist **alst, t_dlist *new)
{
	t_dlist	*last;
	t_dlist	*first;

	first = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last = lstlast_dbl(alst, *alst);
	new -> prev = last;
	last -> next = new;
	new ->next = *alst;
	first->prev = new;
}