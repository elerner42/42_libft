/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:28:37 by elerner           #+#    #+#             */
/*   Updated: 2023/03/21 20:32:28 by elerner          ###   ########.fr       */
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

static size_t	ft_strlen_s(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

static size_t	ft_splitlen(const char *str, char c)
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

static char	*ft_settoken(const char *str, char c)
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
	size_t	len;
	size_t	i;
	char	**result;

	result = (char **)malloc((ft_splitlen(str, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			len = ft_strlen_s(str, c);
			result[i++] = ft_settoken(str, c);
			str = str + len;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}
