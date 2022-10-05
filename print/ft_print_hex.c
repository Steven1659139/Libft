/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:12:17 by slavoie           #+#    #+#             */
/*   Updated: 2022/10/05 13:37:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_hex(unsigned int num)
{
	char	*based;

	num = (unsigned int)(4294967295 + 1 + num);
	based = ft_num_to_base((unsigned long long)num, 16);
	ft_putstr_fd(based, 1);
	free(based);
}
