/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:18:48 by aguay             #+#    #+#             */
/*   Updated: 2021/11/03 09:51:29 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_longlimit(unsigned long long p, int *ratour, char *base)
{
	if (p == LONG_MAX || p == ULONG_MAX)
	{
		if (base[10] == 'a')
			write(1, "ffffffff", 8);
		else if (base[10] == 'A')
			write(1, "FFFFFFFF", 8);
		*ratour += 8;
		return (1);
	}
	else if (p == (unsigned long long)LONG_MIN || p == 0)
	{
		write(1, "0", 1);
		*ratour += 1;
		return (1);
	}
	return (0);
}

static void	ft_print_x(char *base, unsigned long long p, int *ratour)
{
	char	retour[20];
	int		i;

	if (ft_longlimit(p, ratour, base))
		return ;
	i = 0;
	while (p >= 16)
	{
		retour[i++] = base[p % 16];
		p = p / 16;
	}
	retour[i] = base[p];
	while (i >= 0)
	{
		ft_putchar_fd(retour[i--], 1);
		*ratour += 1;
	}
}

static void	ft_print_p(char *base, unsigned long long p, int *ratour)
{
	char	retour[20];
	int		i;

	i = 0;
	write(1, "0x", 2);
	*ratour += 2;
	while (p >= 16)
	{
		retour[i++] = base[p % 16];
		p = p / 16;
	}
	retour[i] = base[p];
	while (i >= 0)
	{
		ft_putchar_fd(retour[i--], 1);
		*ratour += 1;
	}
}

//	Fonction utiliser dans ft_printf pour ecrire 
//	soit un hexadecimal au minuscule, majuscule ou
//	un pointeur.
int	ft_puthex(va_list s, int count, char type, int *ratour)
{
	char				*base;
	unsigned long long	p;

	p = va_arg(s, unsigned long long);
	base = "0123456789abcdef";
	if (type == 'X')
		base = "0123456789ABCDEF";
	if (type == 'x' || type == 'X')
		ft_print_x(base, (unsigned int)p, ratour);
	else if (type == 'p')
		ft_print_p(base, p, ratour);
	count++;
	return (count);
}
