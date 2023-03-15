/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:32:59 by elerner           #+#    #+#             */
/*   Updated: 2023/03/15 21:51:08 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    la función ft_strmapi toma una cadena de caracteres "s" y una función "f"
    que se aplicará a cada carácter de la cadena "s". 
    La función ft_strmapi devolverá una "nueva cadena" de caracteres 
    con los resultados de aplicar la función f 
    sobre cada carácter de la cadena s.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	c;

	len = 0;
	c = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[c])
	{
		str[c] = f(c, s[c]);
		c++;
	}
	str[c] = '\0';
	return (str);
}
