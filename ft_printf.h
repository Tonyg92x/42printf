/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:19:31 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 08:17:53 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <stddef.h>
# include <string.h>
# include <stdarg.h>

void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_puthex(va_list s, int count, char type);
void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *str, ...);
int		ft_print_dui(va_list s, int count, char type);
int		ft_print_chars(va_list s, int count, char type);
#endif