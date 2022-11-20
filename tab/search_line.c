/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:57:56 by stevenlavoi       #+#    #+#             */
/*   Updated: 2022/11/20 16:46:38 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
	cherche la ligne (char *line) dans le tableau (char **tab) et la renvoie
	si rien n'est trouvé, renvoie NULL 
*/
char	*search_line(char **tab, char *line)
{
	while (*tab)
	{
		if (ft_strnstr(*tab, line, ft_strlen(line)))
			return (*tab);
		tab++;
	}
	return (NULL);
}
