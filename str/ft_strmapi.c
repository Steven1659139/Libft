/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:57:48 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:37:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtn;
	unsigned int	index;

	index = 0;
	rtn = malloc(ft_strlen(s) + 1);
	if (!rtn)
		return (0);
	while (s[index])
	{
		rtn[index] = f(index, s[index]);
		index++;
	}
	rtn[index] = 0;
	return (rtn);
}
