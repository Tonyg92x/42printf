/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:52:44 by aguay             #+#    #+#             */
/*   Updated: 2021/11/03 14:30:35 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_much_digit(unsigned int n)
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

static char	*positif(char *retour, unsigned int n)
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

static char	*limit_check(unsigned int n)
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
	if (n == 4294967295)
	{
		retour = malloc(11);
		if (!retour)
			return (NULL);
		retour = "4294967295";
		return (retour);
	}
	return (NULL);
}

//	NE PAS OUBLIER DE FREE
//	Alloue et retourne une chaine de 
//	caractere reprèsentant l'integer 
//	recu en argument.
char	*ft_utoa(unsigned int n)
{
	char	*retour;

	retour = limit_check(n);
	if (!(!retour))
		return (retour);
	if (n > 0)
	{
		retour = malloc(how_much_digit(n) + 1);
		if (!retour)
			return (NULL);
		retour = positif(retour, n);
	}
	return (retour);
}
