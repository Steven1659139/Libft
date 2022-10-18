/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:22:30 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/11 16:34:38 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void lst_print(t_list **list)
{
    t_list *node;
    int i;

    node = *list;
    i = 0;

    while (node)
    {
        printf("node[%d] = %s\n", i, (char *)node->content);
        node = node->next;
        i++;
    }
}