/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:00:58 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:37:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	rtn = malloc(len);
	if (!rtn)
		return (NULL);
	ft_strlcpy(rtn, s1, len);
	ft_strlcat(rtn, s2, len);
	return (rtn);
}
