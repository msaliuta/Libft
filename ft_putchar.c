/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:52:13 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 13:18:34 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	unsigned char	buff[4];

	if (c < 128)
		write(1, &c, 1);
	else if (c < 2048)
	{
		buff[1] = (c & 63) + 128;
		buff[0] = (c >> 6 & 63) + 192;
		write(1, buff, 2);
	}
	else if (c < 65535)
	{
		buff[2] = (c & 63) + 128;
		buff[1] = (c >> 6 & 63) + 128;
		buff[0] = (c >> 12 & 15) + 224;
		write(1, buff, 3);
	}
	else if (c >= 65535)
	{
		buff[3] = (c & 63) + 128;
		buff[2] = (c >> 6 & 63) + 128;
		buff[1] = (c >> 12 & 63) + 128;
		buff[1] = (c >> 18 & 7) + 240;
		write(1, buff, 4);
	}
}
