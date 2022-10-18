/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_dbl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:02:55 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/12 13:45:09 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dlist	*lstlast_dbl(t_dlist **first, t_dlist *lst)
{
	if (!lst)
		return (0);
	if (lst->next == *first)
		return (lst);
	while (lst->next != *first)
		lst = lst->next;
	return (lst);
}
