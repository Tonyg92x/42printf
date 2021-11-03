/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:25:29 by aguay             #+#    #+#             */
/*   Updated: 2021/11/03 14:27:46 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	x;
	int	y;

	x = printf("%u\n", (unsigned int)2147483648);
	y = ft_printf("%u\n", (unsigned int)2147483648);
	printf("printf = %d\n", x);
	printf("ft_printf = %d\n", y);
}