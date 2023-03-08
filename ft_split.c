/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:28:37 by elerner           #+#    #+#             */
/*   Updated: 2023/03/08 20:58:21 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    s: La string a separar.
    c: El carácter delimitador.

    El array de nuevas strings resulatente de la
    separación. NULL si falla la reserva de memoria.
    
    Reserva (utilizando malloc(3)) un array de strings
    resultante de separar la string ’s’ en substrings
    utilizando el caracter ’c’ como delimitador. El
    array debe terminar con un puntero NULL.
*/

size_t	ft_splitlen(const char *str, char c)
{
	size_t	len;
	size_t	p;	

	len = 0;
	p = 0;
	if (str[p] == c)
		len--;
	while (str[p] != '\0')
	{
		if (str[p + 1] == '\0' || (str[p] == c && str[p + 1] != c))
			len++;
		p++;
	}
	return (len);
}

char	*ft_settoken(const char *str, char c)
{
	size_t	len;
	char	*tmp;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	len = 0;
	while (str[len] && str[len] != c)
	{
		tmp[len] = str[len];
		len++;
	}
	tmp[len] = '\0';
	return (tmp);
}

char	**ft_split(const char *str, char c)
{
	char	**table;
	size_t	len;

	len = 0;
	if (!str)
		return (NULL);
	table = (char **)malloc((ft_splitlen(str, c) + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
		{
			table[len] = ft_settoken(str, c);
			len++;
			while (*str != c && *str)
				str++;
		}
	}
	table[len] = NULL;
	return (table);
}
