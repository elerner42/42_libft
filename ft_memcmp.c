/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:24:43 by elerner           #+#    #+#             */
/*   Updated: 2022/12/07 21:12:15 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Comparamos dos valores void "*s1 y *s2", la cantidad de
 * posiciones que nos de "n", y retorna el valor de la
 * diferenciia encontrada en el rangn "n" y si no hay dif,
 * retorna "0".
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 1)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			str1++;
			str2++;
		}
		n--;
	}
	if (n == 0)
		return (0);
	return (*str1 - *str2);
}
