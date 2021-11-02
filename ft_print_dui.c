/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:02:23 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:50 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	Fonction utile au printf pour sortir soit un 
//	entier, soit un decimal, soit un unsigned int
int	ft_print_dui(va_list s, int count, char type)
{
	int				d;
	unsigned int	u;

	d = 0;
	u = 0;
	if (type == 'd' || type == 'i')
	{
		d = va_arg(s, int);
		ft_putnbr_fd(d, 1);
	}
	else if (type == 'u')
	{
		u = va_arg(s, unsigned int);
		ft_putnbr_unsigned_fd(u, 1);
	}
	count++;
	return (count);
}
