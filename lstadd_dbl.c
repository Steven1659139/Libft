/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_dbl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:03:23 by slavoie           #+#    #+#             */
/*   Updated: 2022/07/04 15:03:31 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstadd(t_dlist **first, t_dlist *new)
{
	static int	index;
	t_dlist		*elem1;
	t_dlist		*last;

	index++;
	if (!*first || index == 1)
	{
		*first = new;
		return ;
	}
	elem1 = *first;
	last = elem1->prev;
	new->prev = last;
	new->next = *first;
	last->next = new;
	elem1->prev = new;
}
