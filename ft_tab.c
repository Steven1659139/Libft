/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:50:13 by slavoie           #+#    #+#             */
/*   Updated: 2022/09/23 11:16:10 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_tab(char **tab)
{
	while (*tab)
	{
		printf("str = %s\n", *tab);
		tab++;
	}
}

int	tab_length(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	**tab_join(char **tab, char *line)
{
	int		len;
	char	**new_tab;
	int		i;

	i = 0;
	if (!tab)
	{
		new_tab = ft_calloc(2, sizeof (char *));
		new_tab[i++] = ft_strdup(line);
		new_tab[i] = NULL;
		return (new_tab);
	}
	len = tab_length(tab);
	new_tab = ft_calloc ((len + 2), sizeof(char *));
	while (i < len)
	{
		new_tab[i] = ft_strdup(tab[i]);
		i++;
	}
	new_tab[i++] = ft_strdup(line);
	new_tab[i] = 0;
	table_flip(tab);
	return (new_tab);
}