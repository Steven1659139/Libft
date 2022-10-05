/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_dbl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:13:08 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:47:25 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
