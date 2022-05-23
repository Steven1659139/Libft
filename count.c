#include "libft.h"

int count_str(char **tab)
{
	int	i;

	i = 0;
	while (*tab)
	{
		tab++;
		i++;
	}
	return (i);
}