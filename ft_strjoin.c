/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:37:10 by msaliuta          #+#    #+#             */
/*   Updated: 2018/10/30 18:37:12 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*temp_ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	temp_ret = ret;
	while (*s1 != '\0')
		*temp_ret++ = *s1++;
	while (*s2 != '\0')
		*temp_ret++ = *s2++;
	*temp_ret = '\0';
	return (ret);
}
