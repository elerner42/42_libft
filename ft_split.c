/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:28:37 by elerner           #+#    #+#             */
/*   Updated: 2023/02/22 23:16:01 by elerner          ###   ########.fr       */
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

/*char	**ft_split(char const *s, char c)
{
	char const	*s_tmp;

	s_tmp = "Result";
	return (*s_tmp);
}

https://parzibyte.me/blog/2018/11/13/separar-cadena-delimitadores-c-strtok/
https://www.lawebdelprogramador.com/foros/C-Visual-C/1684922-Como-separar-cadenas-de-una-cadena-en-C.html
https://www.youtube.com/watch?v=z_pukhnwjZc
*/
/*char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		if (*s == '\0')
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = (char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == ch)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (NULL);
}

int main(){
    /*char cadena[] = "Esto es un texto. Puede ir separado por puntos, espacios o comas.";
    char delimitador[] = "o";
    char *token = strtok(cadena, delimitador);
    if(token != NULL){
        while(token != NULL){
            // Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
            printf("Token: %s\n", token);
            token = strtok(NULL, delimitador);
        }
    }*/
    int len;
    const char str[] = "Esto es un texto. Puede ir separado por puntos, espacios o comas.";
    const char ch = 'k';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str)-1);

    printf("%s\n",ret);
   
    return(0);
}
