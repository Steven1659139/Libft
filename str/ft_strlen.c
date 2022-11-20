/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:11:54 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/18 20:52:20 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	if (str && *str)
	{
		while (*str)
		{
			str++;
			index++;
		}
	}
	return (index);
}
