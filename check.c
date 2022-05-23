#include "libft.h"

int	int_checker(long long nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	return (1);
}

int	twin_checker_dbl(t_dlist **lst)
{
	t_dlist	*ptr_ref;
	t_dlist	*ptr_check;

	ptr_ref = *lst;
	while (ptr_ref->next != *lst)
	{
		ptr_check = ptr_ref->next;
		while (ptr_check != *lst)
		{
			if (ptr_ref->content == ptr_check->content)
				return (0);
			ptr_check = ptr_check->next;
		}
		ptr_ref = ptr_ref->next;
	}
	return (1);
}
