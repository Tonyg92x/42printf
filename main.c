/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:41:10 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 09:01:26 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Testing %%c\n\n");
	
	// test 1
	ft_printf("ft_printf :\t");
	ft_printf("%c", '0');
	ft_printf("\n");
	printf("printf :\t");
	printf("%c", '0');
	printf("\n\n");
	
	// test 2
	ft_printf("ft_printf :\t");
	ft_printf(" %c ", '0');
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c ", '0');
	printf("\n\n");

	// test 3
	ft_printf("ft_printf :\t");
	ft_printf(" %c", '0' - 256);
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c", '0' - 256);
	printf("\n\n");

	// test 4
	ft_printf("ft_printf :\t");
	ft_printf("%c ", '0' + 256);
	ft_printf("\n");
	printf("printf :\t");
	printf("%c ", '0' + 256);
	printf("\n\n");

	// test 5
	ft_printf("ft_printf :\t");
	ft_printf(" %c %c %c ", '0', 0, '1');
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c %c %c ", '0', 0, '1');
	printf("\n\n");

	// test 6
	ft_printf("ft_printf :\t");
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c %c %c ", ' ', ' ', ' ');
	printf("\n\n");

	// test 7
	ft_printf("ft_printf :\t");
	ft_printf(" %c %c %c ", '1', '2', '3');
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c %c %c ", '1', '2', '3');
	printf("\n\n");

	// test 8
	ft_printf("ft_printf :\t");
	ft_printf(" %c %c %c ", '2', '1', 0);
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c %c %c ", '2', '1', 0);
	printf("\n\n");

	// test 9
	ft_printf("ft_printf :\t");
	ft_printf(" %c %c %c ", 0, '1', '2');
	ft_printf("\n");
	printf("printf :\t");
	printf(" %c %c %c ", 0, '1', '2');
	printf("\n\n");
	
	return (0);
}