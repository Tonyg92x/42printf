/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:25 by aguay             #+#    #+#             */
/*   Updated: 2021/11/02 09:49:41 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	NE PAS OUBLIER DE FREE
//	Allocate exactly the right space of src string
//	into an other string using malloc.
char	*ft_strdup(const char *src)
{
	int		count;	
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}