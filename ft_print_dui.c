/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:02:23 by aguay             #+#    #+#             */
/*   Updated: 2021/11/03 09:51:16 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_much_char_u(unsigned int u)
{
	int		i;
	char	*nbr;

	if (u == 2147483648)
		return (10);
	i = 0;
	nbr = ft_itoa((int)u);
	while (nbr[i])
		i++;
	free(nbr);
	return (i);
}

static int	how_much_char_i(int d)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = ft_itoa(d);
	while (nbr[i])
		i++;
	free(nbr);
	return (i);
}

//	Fonction utile au printf pour sortir soit un 
//	entier, soit un decimal, soit un unsigned int
int	ft_print_dui(va_list s, int count, char type, int *retour)
{
	int				d;
	unsigned int	u;

	d = 0;
	u = 0;
	if (type == 'd' || type == 'i')
	{
		d = va_arg(s, int);
		ft_putnbr_fd(d, 1);
		*retour += how_much_char_i(d);
	}
	else if (type == 'u')
	{
		u = va_arg(s, unsigned int);
		ft_putnbr_unsigned_fd(u, 1);
		if (u >= 4200000000)
			*retour += 10;
		else
			*retour += how_much_char_u(u);
	}
	count++;
	return (count);
}
