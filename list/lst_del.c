/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:41:08 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/11 16:44:32 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
		del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*elem;
	int		i;

	i = ft_lstsize(*lst);
	while (i != 0)
	{
		elem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = elem;
		i--;
	}
}
