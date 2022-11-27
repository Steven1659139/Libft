/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_isnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:46:07 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/26 14:47:42 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isnum(char c)
{
	return (c > '0' && c < '9');
}

int	str_isnum(char *str)
{
	while (str && *str)
	{
		if (!(ft_isnum(*str)))
			return (0);
		str++;
	}
	return (1);
}
