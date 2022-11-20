/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:18:09 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/18 21:15:57 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	index;

	index = 0;
	if (!(dst || src))
		return (0);
	while (src[index] && (index + 1) < dst_size)
	{	
		dst[index] = src[index];
		index++;
	}
	if (dst_size != 0)
		dst[index] = 0;
	while (src[index])
		index++;
	return (index);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	index;

	index = 0;
	while (*dst && index < dst_size)
	{
		index++;
		dst++;
	}
	while (*src && (index + 1) < dst_size)
	{
		*dst++ = *src++;
		index++;
	}
	if (index < dst_size)
		*dst = 0;
	while (*src++)
		index++;
	return (index);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	index;

	index = 0;
	str = (char *)ft_calloc((len + 1), sizeof (char));
	if (!(s && str))
		return (NULL);
	while (index < len && start < ft_strlen(s))
		str[index++] = s[start++];
	return (str);
}
