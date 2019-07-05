/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:37:48 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 16:01:42 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		nbr;
	int		neg;

	nbr = 0;
	neg = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10 + (int)str[i] - (int)'0';
		i++;
	}
	if (neg)
		return (-nbr);
	else
		return (nbr);
}
