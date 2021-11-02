/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:18:48 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:41 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	Fonction utiliser dans ft_printf pour ecrire 
//	soit un hexadecimal au minuscule, majuscule ou
//	un pointeur.
int	ft_puthex(va_list s, int count, char type)
{
	char		*base;
	char		retour[20];
	long int	p;
	int			i;

	i = 0;
	p = va_arg(s, long int);
	base = "0123456789abcdef";
	if (type == 'X')
		base = "0123456789ABCDEF";
	if (type == 'p')
		write(1, "0x10", 4);
	while (p > 16)
	{
		retour[i++] = base[p % 16];
		p = p / 16;
	}
	retour[i] = base[p];
	while (i >= 0)
		ft_putchar_fd(retour[i--], 1);
	count++;
	return (count);
}
