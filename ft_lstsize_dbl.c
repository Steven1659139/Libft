#include "libft.h"

size_t	ft_lstsize_dbl(t_dlist **first)
{
	int		i;
	t_dlist	*lst;

	i = 0;
	if (!*first)
		return (0);
	lst = *first;
	while (lst->next != *first)
	{
		i++;
		lst = lst->next;
	}
	return (++i);
}