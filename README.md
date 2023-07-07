# Libft

Libft
"Libft" est un projet de l'école de programmation 42. L'objectif de ce projet est de recréer certaines fonctions de la bibliothèque standard de C, ainsi que d'autres fonctions utiles que nous utiliserons tout au long de notre cursus à 42.

Contenu
Cette bibliothèque inclut les fonctions suivantes :

Manipulation de chaînes de caractères : ft_strlen, ft_strdup, ft_strjoin, etc.
Manipulation de nombres : ft_atoi, ft_itoa.
Manipulation de listes chaînées : ft_lstnew, ft_lstadd_front, ft_lstsize, etc.
Et bien d'autres.
Pour une liste complète des fonctions, veuillez consulter le fichier libft.h.

Compilation
La bibliothèque peut être compilée à l'aide de la commande make. Cela générera une bibliothèque statique nommée libft.a.

bash
Copy code
make
Utilisation
Pour utiliser cette bibliothèque dans votre projet, incluez l'en-tête avec #include "libft.h" dans votre fichier source et liez la bibliothèque lors de la compilation:

bash
Copy code
gcc your_source_file.c -L. -lft
Licence
Ce projet est sous licence MIT.

