/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:41:10 by aguay             #+#    #+#             */
/*   Updated: 2021/11/03 09:24:25 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int x;
	
	printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	x = ft_printf(" %X %X %X %X %X %X %X\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%d\n",x);
	x = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%d\n",x);
	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%X", 0);
	// ft_printf("%X", 0);
}