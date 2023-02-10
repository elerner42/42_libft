/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:07:29 by elerner           #+#    #+#             */
/*   Updated: 2023/02/09 16:19:27 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    s1: La string que debe ser recortada.
    set: Los caracteres a eliminar de la string.
    La string recortada. NULL si falla la reserva de memoria.
    
    Elimina todos los caracteres de la string ’set’
    desde el principio y desde el final de ’s1’, hasta
    encontrar un caracter no perteneciente a ’set’. La
    string resultante se devuelve con una reserva de
    malloc(3).
*/

char	*ft_strtrim(char const *s, char const *set)
{
	char	*s_tmp;
	size_t	c;
	size_t	len;

	s_tmp = NULL;
	if (s && set)
	{
		len = ft_strlen(s);
		c = 0;
		while (s[c] && ft_strchr(set, s[c]))
			c++;
		while (s[len - 1] && ft_strrchr(set, s[len - 1]) && len > c)
			len--;
		s_tmp = ft_calloc((len - c) + 1, sizeof(char));
		if (!s_tmp)
			return (NULL);
		ft_strlcpy(s_tmp, &s[c], (len - c) + 1);
	}
	return (s_tmp);
}
