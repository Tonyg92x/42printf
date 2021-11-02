/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:44:56 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:37 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	Ecrit dans fd un unsigned int n.
void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int		i;
	char	str[13];

	i = 0;
	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	while (n != 0)
	{
		str[i++] = '0' + n % 10;
		n = n / 10;
	}
	i--;
	while (i > -1)
	{
		write(fd, &str[i], 1);
		i--;
	}
}
