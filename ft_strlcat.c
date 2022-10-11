/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:06:39 by elerner           #+#    #+#             */
/*   Updated: 2022/10/11 23:21:30 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_src;
	size_s	l_dst;
	char buffer[size];

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	ft_strlcpy(buffer, src, size);
	while(dst != '\0')
	{

	}




	return (0);
}
*/
int main()
{
	/*Agregará como máximo dstsize - strlen (dst) - 1 caracteres*/

	char str1[] = "Hola ";
	char str2[] = "mundo cruel!";
	int r;
	int size = 19;
	char buffer[size];

	ft_strlcpy(buffer, str1, size);
	//strcpy(buffer,str1); /*cargamos str1 al buffer para hacer el strlcat*/

	printf("Cantidad de Chars en Buffer: %lu\n", strlen(buffer));
	printf("Agregara como Maximo: %lu\n", size-(strlen(buffer)-1));

	r = strlcat(buffer,str2,size); // retorna el un entero

	printf("Valor: %d\n",r);
	if( r > size )
		puts("Cadena truncada.");
	else
		puts("copiado correctamente!");
	puts(buffer);

	return(0);
}
