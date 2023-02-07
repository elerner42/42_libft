/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:07:29 by elerner           #+#    #+#             */
/*   Updated: 2023/02/07 20:33:45 by elerner          ###   ########.fr       */
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

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strchr(const char *s, int c)
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
}

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

void	ft_bzero(char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t n_Element, size_t size_Element)
{
	char	*m_tmp;

	if (size_Element != 0)
		if (n_Element > __SIZE_MAX__ / size_Element)
			return (NULL);
	m_tmp = malloc(n_Element * size_Element);
	if (!m_tmp)
		return (NULL);
	ft_bzero(m_tmp, n_Element * size_Element);
	return (m_tmp);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*memory;
	size_t	i;
	size_t	size;

	memory = NULL;
	if (s1 && set)
	{
		i = 0;
		size = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[size -1] && ft_strrchr(set, s1[size -1]) && size > i)
			size--;
		memory = (char *)ft_calloc((size - i + 1), sizeof(char));
		if (memory == NULL)
			return (NULL);
		ft_strlcpy(memory, &s1[i], size - i + 1);
	}
	return (memory);
}

int main(void)
{
    char *Sa;
    char *Sb;

    Sa = "hola mundo";
    Sb = "ohld";

    printf("%s\n", ft_strtrim(Sa,Sb));
    
    return (0);
}