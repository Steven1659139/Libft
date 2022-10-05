/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:42:41 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:44:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new -> next = *alst;
	*alst = new;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last = ft_lstlast(*alst);
	last -> next = new;
}

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