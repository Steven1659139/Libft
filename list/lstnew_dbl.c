/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_dbl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:02:11 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:47:38 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dlist	*lstnew_dbl(int content)
{
	t_dlist	*new;

	new = (t_dlist *)malloc(sizeof(*new));
	if (!new)
		return (0);
	new->content = &content;
	new->next = new;
	new->prev = new;
	return (new);
}
