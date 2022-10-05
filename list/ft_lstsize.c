/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:43:05 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:47:27 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// int	ft_lstsize(t_list *lst)
// {
// 	int	size;

// 	size = 0;
// 	while (lst)
// 	{
// 		lst = lst -> next;
// 		size++;
// 	}
// 	return (size);
// }

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ref;

	if (!lst)
		return (0);
	ref = lst;
	size = 0;
	while (lst->next != ref)
	{
		lst = lst -> next;
		size++;
	}
	size++;
	return (size);
}
