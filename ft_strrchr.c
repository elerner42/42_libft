/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:19:52 by elerner           #+#    #+#             */
/*   Updated: 2023/03/18 00:09:14 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_strrchr busca el último carácter especificado por c 
	en la cadena de caracteres s. Si el carácter es encontrado, 
	devuelve un puntero al lugar en la cadena donde se encontró. 
	
	Si el carácter no se encuentra, devuelve un puntero nulo.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	ch;

	ch = c;
	tmp = NULL;
	while (*s)
	{
		if (*s == ch)
			tmp = (char *)s;
		if (*s == '\0')
			return (tmp);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (tmp);
}
