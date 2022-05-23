#include "libft.h"

void	ft_print_hex(unsigned int num)
{
	char	*based;

	num = (unsigned int)(4294967295 + 1 + num);
	based = ft_num_to_base((unsigned long long)num, 16);
	ft_putstr_fd(based, 1);
	free(based);
}