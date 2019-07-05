/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:01:55 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 15:55:01 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l_1;
	size_t	l_2;
	int		k;

	l_1 = ft_strlen(s1) + 1;
	l_2 = ft_strlen(s2) + 1;
	i = (l_2 < n) ? l_2 : n;
	i = (l_1 < i) ? l_1 : i;
	k = ft_memcmp(s1, s2, i);
	return (k);
}
