/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:41:50 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:43 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	Écrit le caractère ’c’ sur le file
//	descriptor donné.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
