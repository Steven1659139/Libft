/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:13:22 by slavoie           #+#    #+#             */
/*   Updated: 2022/07/04 15:13:24 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoll(const char *str)
{
	long long	n;
	int			negation;

	n = 0;
	negation = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (n >= 1)
			return (0);
		if (*str == '-')
			negation++;
		n++;
		str++;
	}
	n = 0;
	if (*str == '+' && negation > 0)
		return (n);
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (negation)
		n *= -1;
	return (n);
}
