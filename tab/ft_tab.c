/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:50:13 by slavoie           #+#    #+#             */
/*   Updated: 2022/11/20 16:46:34 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
	Affiche un tableau
	args:
		tab: le tableau à afficher
*/
void	print_tab(char **tab)
{
	while (*tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
}

/*
	Compte le nombre d'élément dans le tableau
	args:
		tab: le tableau à compter
	return:
		i: Le nombre d'élément dans le tableau
*/
int	tab_length(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

/*
	Ajoute une ligne au tableau
	args:
		tab: le tableau
		line: la ligne à ajouter 
	return:
		new_tab: le nouveau tableau incluant la nouvelle ligne 
*/
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

char	**tabcpy(char **src)
{
	char	**new_tab;
	int		len;
	int		i;

	i = 0;
	len = tab_length(src);
	new_tab = malloc(sizeof(char *) * len + 1);
	while (i < len)
	{
		new_tab[i] = ft_strdup(src[i]);
		i++;
	}
	return (new_tab);
}

char	**tab_trunc(char **tab, char *str, int len)
{
	int		i;
	char	**new_tab;

	i = 0;
	new_tab = NULL;
	if (!tab || !str)
		return (tab);
	while (tab[i])
	{
		if (ft_strncmp(tab[i], str, len) != 0)
			new_tab = tab_join(new_tab, tab[i]);
		i++;
	}
	table_flip(tab);
	return (new_tab);
}
