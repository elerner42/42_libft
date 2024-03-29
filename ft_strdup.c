/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:43:49 by elerner           #+#    #+#             */
/*   Updated: 2023/02/22 22:28:08 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Toma un único argumento: la cadena de origen que se va a duplicar
y devuelve el puntero a una cadena recién copiada. 
La función devuelve NULL en caso de error, es decir, 
cuando no hay suficiente memoria para asignar.
*/

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*out_str;

	len = ft_strlen(str);
	out_str = ft_calloc(len + 1, sizeof(char));
	if (out_str)
	{
		ft_memcpy(out_str, str, len);
	}
	else
	{
		return (NULL);
	}
	return (out_str);
}
