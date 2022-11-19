/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:53:15 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/18 20:48:14 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*rtn;
	unsigned int	index;

	index = 0;
	rtn = (char *)ft_calloc((len + 1) , sizeof (char));
	if (!(s && rtn))
		return (NULL);
	while (index < len && start < ft_strlen(s))
		rtn[index++] = s[start++];
	return (rtn);
}
