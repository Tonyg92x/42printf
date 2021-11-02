/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:13:22 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:48 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_c(va_list s)
{
	char	c;

	c = va_arg(s, int);
	write(1, &c, 1);
}

static void	ft_print_s(va_list s)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(s, char *);
	while (str[i])
		ft_putchar_fd(str[i++], 1);
}

//	Fonction utile au printf. Permet d'imprimer soit
//	un charactere, soit une string, soit un %.
int	ft_print_chars(va_list s, int count, char type)
{
	if (type == '%')
		ft_putchar_fd('%', 1);
	else if (type == 'c')
		ft_print_c(s);
	else if (type == 's')
		ft_print_s(s);
	count++;
	return (count);
}


