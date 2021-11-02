/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:42:39 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:41:46 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	s;
	int		count;

	count = 0;
	va_start(s, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			count++;
			if (str[count] == 'c' || str[count] == '%' || str[count] == 's')
				count = ft_print_chars(s, count, str[count]);
			else if (str[count] == 'd' || str[count] == 'i'
				|| str[count] == 'u')
				count = ft_print_dui(s, count, str[count]);
			else if (str[count] == 'x' || str[count] == 'X'
				|| str[count] == 'p')
				count = ft_puthex(s, count, str[count]);
		}
		else
			ft_putchar_fd(str[count++], 1);
	}
	return (count);
}
