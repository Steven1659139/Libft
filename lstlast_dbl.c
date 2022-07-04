/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_dbl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:02:55 by slavoie           #+#    #+#             */
/*   Updated: 2022/07/04 15:03:03 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
