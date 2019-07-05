/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:51:29 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 15:03:54 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
	}
	if (c == 0)
		return ((char*)(s + i));
	return (NULL);
}
