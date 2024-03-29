/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:34:15 by msaliuta          #+#    #+#             */
/*   Updated: 2018/11/04 13:19:48 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(int c, int fd)
{
	unsigned char	buff[4];

	if (c < 128)
		write(fd, &c, 1);
	else if (c < 2048)
	{
		buff[1] = (c & 63) + 128;
		buff[0] = (c >> 6 & 63) + 192;
		write(fd, buff, 2);
	}
	else if (c < 65535)
	{
		buff[2] = (c & 63) + 128;
		buff[1] = (c >> 6 & 63) + 128;
		buff[0] = (c >> 12 & 15) + 224;
		write(fd, buff, 3);
	}
	else if (c >= 65535)
	{
		buff[3] = (c & 63) + 128;
		buff[2] = (c >> 6 & 63) + 128;
		buff[1] = (c >> 12 & 63) + 128;
		buff[1] = (c >> 18 & 7) + 240;
		write(fd, buff, 4);
	}
}
