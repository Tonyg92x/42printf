/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:52:44 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 09:40:23 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_much_digit(int n)
{
	int	retour;

	retour = 0;
	while (n > 0)
	{
		retour++;
		n = n / 10;
	}
	return (retour);
}

static char	*positif(char *retour, int n)
{
	int		i;
	int		i_retour;
	char	str[14];

	i = 0;
	i_retour = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		retour[i_retour] = str[i];
		i--;
		i_retour++;
	}
	retour[i_retour] = '\0';
	return (retour);
}

static char	*negatif(char *retour, int n)
{
	int		i;
	int		i_retour;
	char	str[14];

	i = 0;
	i_retour = 0;
	retour[i_retour++] = '-';
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	while (i-- > 0)
		retour[i_retour++] = str[i];
	retour[i_retour] = '\0';
	return (retour);
}

static char	*limit_check(int n)
{
	char	*retour;

	if (n == 0 || n == -0)
	{
		retour = malloc(2);
		if (!retour)
			return (NULL);
		retour [0] = '0';
		retour [1] = '\0';
		return (retour);
	}
	if (n == -2147483648)
	{
		retour = ft_strdup("-2147483648");
		if (!retour)
			return (NULL);
		return (retour);
	}
	return (NULL);
}

//	NE PAS OUBLIER DE FREE
//	Alloue et retourne une chaine de 
//	caractere reprèsentant l'integer 
//	recu en argument.
char	*ft_itoa(int n)
{
	char	*retour;

	retour = limit_check(n);
	if (!(!retour))
		return (retour);
	if (!(!retour))
		return (retour);
	if (n > 0)
	{
		retour = malloc(how_much_digit(n) + 1);
		if (!retour)
			return (NULL);
		retour = positif(retour, n);
	}
	else
	{
		n = -n;
		retour = malloc(how_much_digit(n) + 2);
		if (!retour)
			return (NULL);
		retour = negatif(retour, n);
	}
	return (retour);
}