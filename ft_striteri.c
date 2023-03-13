/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:42:06 by elerner           #+#    #+#             */
/*   Updated: 2023/03/13 23:55:54 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	El prototipo de la función ft_striteri indica que esta función
	toma una cadena de caracteres (char *s) y una función 
	(void (*f)(unsigned int, char*)) como parámetros,
	y no devuelve ningún valor (void).

	La función ft_striteri aplica la función f a cada carácter de la cadena s,
	pasando como parámetros el índice del carácter y una referencia 
	al carácter en sí mismo. El índice se representa como un número 
	entero sin signo (unsigned int).
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;

	n = 0;
	while (s[n])
	{
		f(n, &s[n]);
		n++;
	}
}
