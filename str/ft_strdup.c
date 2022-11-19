/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:49:41 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/18 20:45:14 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	int		len;
	int		index;

	index = 0;
	len = ft_strlen(s1);
	rtn = ft_calloc(len + 1, sizeof(char));
	if (!rtn)
		return (0);
	while (len--)
		rtn[index++] = *s1++;
	// rtn[index] = 0;
	return (rtn);
}
