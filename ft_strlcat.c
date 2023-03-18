/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:06:39 by elerner           #+#    #+#             */
/*   Updated: 2023/03/17 23:35:04 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_strlcat concatena la cadena de origen src a la cadena 
	de destino dst, asegurándose de que no se desborde el tamaño máximo 
	permitido dstsize. El tamaño de la cadena resultante es el tamaño de 
	dst más el tamaño de src, siempre y cuando la longitud de dst sea menor 
	que dstsize.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	if (dstsize > 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
