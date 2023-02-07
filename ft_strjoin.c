/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:56:30 by elerner           #+#    #+#             */
/*   Updated: 2023/02/07 20:02:31 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    s1: La primera string.
    s2: La string a añadir a ’s1’.

    Reserva (con malloc(3)) y devuelve una nueva
    string, formada por la concatenación de ’s1’ y
    ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s3;
	size_t	l;
	char	*s3;

	len_s3 = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = ft_calloc(len_s3 + 1, sizeof(char));
	if (!s3)
		return (NULL);
	if (*s1 != 0)
		ft_memcpy(s3, s1, ft_strlen(s1));
	l = ft_strlen(s1);
	while (*s2 != 0)
	{
		s3[l] = *s2;
		l++;
		s2++;
	}
	return (s3);
}
