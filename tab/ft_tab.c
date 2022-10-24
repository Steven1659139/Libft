/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:50:13 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/23 09:32:47 by slavoie          ###   ########.fr       */
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
		// printf("new_tab create\n");
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
	char **new_tab;
	int	len;
	int i;

	i = 0;
	len = tab_length(src);
	new_tab = malloc(sizeof(char *) * len + 1);

	while(i < len)
	{
		new_tab[i] = ft_strdup(src[i]);
		// printf("new_tab[%d] = %s\n", i, new_tab[i]);
		i++;
	}
	// i++;
	// new_tab[i] = 0;

	// print_tab(new_tab);
	return (new_tab);
}