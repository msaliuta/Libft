/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:54:16 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 14:57:13 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	i;
	size_t	n;

	cpy = (char*)malloc(ft_strlen(s) + 1);
	i = -1;
	n = ft_strlen(s);
	if (cpy)
	{
		while (++i < n)
			cpy[i] = s[i];
		cpy[i] = '\0';
		return (cpy);
	}
	return (NULL);
}
